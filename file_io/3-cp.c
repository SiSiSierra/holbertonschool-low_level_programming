#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_fd - Close file descriptors
 *
 * @fd: Given file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy file to another
 *
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fdfrom, fdto, out = 1;
	char *buffer = malloc(1024);

	if (buffer == NULL)
		exit(-1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY | O_EXCL);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		out = read(fdfrom, buffer, 1024);
		if (out < 0 || fdfrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_fd(fdfrom);
			close_fd(fdto);
			exit(98);
		}
		if (fdto == -1 || write(fdto, buffer, 1024) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_fd(fdfrom);
			close_fd(fdto);
			exit(99);
		}
	} while (out != 0);
	close_fd(fdfrom);
	close_fd(fdto);
	return (0);
}
