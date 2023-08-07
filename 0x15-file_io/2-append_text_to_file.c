#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to append to the file.
 *
 * Return: On success, 1.
 *         On failure, -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);

	close(fd);

	if (bytes_written == -1 || (size_t)bytes_written != (size_t)len)
		return (-1);

	return (1);
}
