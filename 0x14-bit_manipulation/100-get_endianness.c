#include "main.h"

/**
 * get_endianness - checks the endinness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int nbo = 1;
	char *endian = (char *)&nbo;

	if (*endian == 1)
		return (1);

	return (0);
}
