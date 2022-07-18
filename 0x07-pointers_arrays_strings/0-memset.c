#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to the memory area
 * @b: Value to replace
 * @n: Number of bytes
 *
 * Return: Pointer to the string modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		if (*(s + i) == '\0')
			break;
	}

	return (s);
}
