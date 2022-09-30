#include "main.h"

/**
 * main - Program entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
		printf("\n");
	}

	return (0);
}
