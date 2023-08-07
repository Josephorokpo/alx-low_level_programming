#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

char *create_buffer(char *file);
int open_file(const char *filename, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to, char *buffer);
void close_file(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open_file(argv[1], O_RDONLY, 0);
	to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_file(from, to, buffer);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 * create_buffer - Allocates a buffer of size 1024 bytes.
 * @file: The name of the file the buffer will be used for.
 *
 * Return: A pointer to the newly-allocated buffer, or NULL on failure.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(BUF_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate buffer for %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (buffer);
}

/**
 * open_file - Opens a file.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The file mode to use if the file is created.
 *
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

/**
 * copy_file - Copies the contents of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 * @buffer: The buffer used for copying.
 */
void copy_file(int fd_from, int fd_to, char *buffer)
{
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);

		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			close_file(fd_from);
			close_file(fd_to);
			exit(EXIT_FAILURE);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		close_file(fd_from);
		close_file(fd_to);
		exit(EXIT_FAILURE);
	}
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(EXIT_FAILURE);
	}
}
