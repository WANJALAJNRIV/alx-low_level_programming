#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: There is no return value
 */

void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
