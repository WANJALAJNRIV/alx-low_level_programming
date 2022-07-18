#include "main.h"
/**
 * _strspn - Function that gets the lenght of a prefix substring.
 * @s: Pointer to the initial segment
 * @accept: Pointer to the acceptance segment
 *
 * Return: Number of coincidences (unsigned int)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int counter = 0;
	int len_long_str = strleng(s);
	int len_accept = strleng(accept);

	for (i = 0; i < len_long_str - 1; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				break;
			}
			if (*(accept + j) == '\0')
				return (counter);
		}
	}
	return (counter);
}

/**
 * strleng - Function that gets the length of a string.
 * @a: Pointer to a string
 *
 * Return: Length of the string (int)
 */

int strleng(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
