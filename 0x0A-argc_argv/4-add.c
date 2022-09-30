#include "main.h"

/**
 * main - Program entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 1 if one of the numbers is a symbol, 0 if otherwise
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
