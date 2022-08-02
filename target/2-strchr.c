#include "main.h"
#include <stddef.h>
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: NULL if characters not found or new pointer direction.
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
