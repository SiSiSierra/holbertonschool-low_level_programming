#include "main.h"

/**
 * read_textfile - Read and print a text file
 *
 * @filename: Name of file
 * @letters: Number of letters to read
 * Return: Number of letters read and printed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int out;
	int printed;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	out = read(fd, buff, letters);
	close(fd);
	if (out == -1)
	{
		free(buff);
		return (0);
	}
	printed = write(STDOUT_FILENO, buff, out);
	free(buff);
	if (out == -1 || out != printed)
		return (0);
	return (out);
}
