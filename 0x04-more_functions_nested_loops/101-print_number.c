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
	unsigned int num = n;

	if (n < 0)
	{
		putchar('_');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
