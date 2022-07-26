#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Copies a string and returns a pointer to the array.
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: Pointer to the array or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		i++;

	while (*(s2 + j))
		j++;
	j++;

	a = malloc(sizeof(char) * (i + j));

	if (a == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
	{
		*(a + k) = *(s1 + l);
		l++;
	}

	for (n = 0; n <=  j; n++)
	{
		*(a + n + i) = *(s2 + m);
		m++;
	}

	return (a);
}
