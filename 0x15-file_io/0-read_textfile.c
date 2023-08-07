#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read and print the content of a text file to POSIX STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * 0 if the file cannot be opened or read, or if filename is NULL.
 * 0 if the write fails or does not write the expected amount of bytes.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
