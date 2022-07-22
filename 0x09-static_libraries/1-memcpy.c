#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the memory area
 * @src: Pointer to the source
 * @n: Number of bytes
 *
 * Return: Pointer to the string modified.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
