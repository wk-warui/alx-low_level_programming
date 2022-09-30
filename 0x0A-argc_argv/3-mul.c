#include "main.h"

/**
 * main - Program entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 1 if there are no 2 arguments, 0 if otherwise
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
	}

	return (0);
}
