#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, or written,
 * or write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fw = write(fd, text_content, len);
	close(fd);
	if (fw < 0)
		return (-1);
	return (1);
}
