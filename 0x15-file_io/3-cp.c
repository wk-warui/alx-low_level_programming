#include "main.h"

int comp_close(int);
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, eof = 1, from = -1, to = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		comp_close(from);
		exit(99);
	}

	while (eof)
	{
		eof = read(from, buffer, 1024);
		if (eof < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			comp_close(from);
			comp_close(to);
			exit(98);
		}
		else if (eof == 0)
			break;
		bytes_read += eof;
		error = write(to, buffer, eof);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			comp_close(from);
			comp_close(to);
			exit(99);
		}
	}
	error = comp_close(to);
	if (error < 0)
	{
		comp_close(from);
		exit(100);
	}
	error = comp_close(from);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * comp_close - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int comp_close(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}
