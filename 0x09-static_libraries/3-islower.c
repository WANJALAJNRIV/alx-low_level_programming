#include "main.h"

/**
 * _islower - return 1 if lower case else 0
 *@c: character to check
 *
 * Return: 0 or 1 (Success)
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
