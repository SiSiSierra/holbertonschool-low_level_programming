#include "main.h"

/**
 * append_text_to_file - Add text to the end of an existing file
 *
 * @filename: Name of file
 * @text_content: Text to append
 * Return: 1 if successful, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int out;

	if (filename == NULL)
		return(-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		out = write(fd, text_content, len);
		if (out == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
