#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @x: pointer to an array
 *
 * Return: pointer to an array
 */
char *cap_string(char *x)
{
	int cap;

	cap = 0;
	while (x[cap] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		if (x[cap] == ' ' || x[cap] == '\t' || x[cap] == '\n'
		    || x[cap] == ',' || x[cap] == ';' || x[cap] == '.'
		    || x[cap] == '!' || x[cap] == '?' || x[cap] == '"'
		    || x[cap] == '(' || x[cap] == ')' || x[cap] == '{'
		    || x[cap] == '}')
		{
			if (x[cap + 1] >= 97 && x[cap + 1] <= 122)
			{
				x[cap + 1] = x[cap + 1] - 32;
			}
		}
		cap++;
	}
	return (x);
}
