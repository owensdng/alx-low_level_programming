#include "main.h"

/**
 * create_file - Create a new file and write content to it.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to the content to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, content_length);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
