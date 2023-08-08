#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: Pointer to the file's name.
 * @text_content: Content to be added to the end of the file.
 *
 * Return: On failure or if filename is NULL - -1.
 *         If the file doesn't exist or lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, content_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content_length = 0; text_content[content_length];)
			content_length++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	bytes_written = write(file_desc, text_content, content_length);
	if (bytes_written == -1)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);

	return (1);
}
