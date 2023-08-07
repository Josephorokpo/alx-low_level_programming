#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

int open_file(const char *filename, int flags, mode_t mode);
void copy_file(int fd_from, int fd_to);
void close_file(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);

	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
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
		exit(98);
	}
	return (fd);
}

/**
 * copy_file - Copies the contents of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUF_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);

		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
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
		exit(100);
	}
}
