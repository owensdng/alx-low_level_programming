#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of letters to be read.
 *
 * Return: Number of bytes read and printed.
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;    /* Buffer to store the read contents */
	ssize_t fd;   /* File descriptor */
	ssize_t w;    /* Number of bytes written */
	ssize_t t;    /* Number of bytes read */

	if (filename == NULL)
		return (0); /* Return 0 if filename is NULL */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* Return 0 if file opening fails */

	buf = malloc(sizeof(char) * letters); /* Allocate memory for the buffer */
	if (buf == NULL)
	{
		close(fd);
		return (0); /* Return 0 if memory allocation fails */
	}

	t = read(fd, buf, letters); /* Read up to 'letters' bytes from the file */
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0); /* Return 0 if read fails */
	}

	w = write(STDOUT_FILENO, buf, t); /* Write the contents to STDOUT */
	if (w == -1)
	{
		free(buf);
		close(fd);
		return (0); /* Return 0 if write fails */
	}

	free(buf); /* Free the allocated memory */
	close(fd); /* Close the file descriptor */

	return (w); /* Return the number of bytes written */
}
