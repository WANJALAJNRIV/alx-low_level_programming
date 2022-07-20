#include "main.h"
/**
 * is_palindrome - Function that returns if the string is a palindrome
 * @s: Pointer to a string
 *
 * Return: 1 - Palindrome | 0 - Not palindrome.
 */
int is_palindrome(char *s)
{
	return (get_palindrome(s, 0, strlengr(s, 0) - 1, strlengr(s, 0)));
}
/**
 * get_palindrome - Function that returns if the string is a palindrome
 * @s: Pointer to a string
 * @i: Iterator
 * @j: Iterator
 * @k: Length of the string
 *
 * Return: 1 - Palindrome | 0 - Not palindrome.
 */
int get_palindrome(char *s, int i, int j, int k)
{
	if (k == 0)
		return (1);
	if (*(s + i) == *(s + j))
	{
		if (j == 0)
			return (1);
		else
			return (get_palindrome(s, ++i, --j, k));
	}
	return (0);
}

/**
 * strlengr - Function that gets the length of a string.
 * @a: Pointer to a string
 * @i: Iterator
 *
 * Return: Length of the string (int)
 */
int strlengr(char *a, int i)
{
	if (a[i] != '\0')
		return (strlengr(a, ++i));
	return (i);
}
