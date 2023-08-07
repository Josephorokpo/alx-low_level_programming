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
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	char *buffer = (char *)malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		exit(EXIT_FAILURE);
	}

	ssize_t bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		exit(EXIT_FAILURE);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);
	free(buffer);

	if (bytes_written != bytes_read)
		exit(EXIT_FAILURE);

	exit(EXIT_SUCCESS);
}
