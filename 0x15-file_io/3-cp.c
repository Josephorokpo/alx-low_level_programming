#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_buffer - Allocates a buffer of size 1024 bytes.
 * @file: The name of the file the buffer will be used for.
 *
 * Return: A pointer to the newly-allocated buffer, or NULL on failure.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(EXIT_FAILURE);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(from);
		exit(99);
	}

	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);

		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(from);
			close_file(to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close_file(from);
		close_file(to);
		exit(98);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
