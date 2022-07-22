#include "main.h"
/**
 * _strpbrk - Function that searches a tring for any set of bytes.
 * @s: Pointer to the initial segment
 * @accept: Pointer to the acceptance segment
 *
 * Return: The pointer at matched position or NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int len_long_str = strleng(s);
	int len_accept = strleng(accept);

	for (i = 0; i < len_long_str - 1; i++)
	{
		for (j = 0; j < len_accept - 1; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
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
