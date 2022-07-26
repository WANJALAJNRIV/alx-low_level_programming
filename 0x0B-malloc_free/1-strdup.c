#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string and returns a pointer to the array.
 * @str: String to be copied.
 *
 * Return: Pointer to the array or NULL.
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;
	i++;

	dest = malloc(sizeof(char) * i);

	if (dest == NULL)
		return (NULL);

	for (; j < i; j++)
		*(dest + j) = *(str + j);

	return (dest);
}
