#include "main.h"

/**
 * main - Program entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", *(argv + count));
		count++;
		(*argv)++;
	}

	return (0);
}
