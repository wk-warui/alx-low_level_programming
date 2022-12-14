#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the initial segment
 * @accept: pointor to a prefix substring
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int q, r;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	q = 0;
	while (str1[q] != '\0')
	{
		r = 0;
		while (str2[r] != '\0')
		{
			if (str2[r] == str1[q])
			{
				count++;
				break;
			}
			r++;
		}
		if (s[q] != accept[r])
		{
			break;
		}
		q++;
	}
	return (count);
}
