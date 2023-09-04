#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the string to add to the end of
 * the file (can be NULL).
 *
 * Return: On success, returns 1, failure or if filename is NULL, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int bytes_written = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
