#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_no, write_no;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	read_no = read(fd, buf, letters);
	write_no = write(STDOUT_FILENO, buf, read_no);

	close(fd);

	free(buf);

	return (write_no);
}
