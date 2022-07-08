#include "main.h"

/**
 * print_number - function outputs an integers
 *
 *@n: is int for digit integer
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
