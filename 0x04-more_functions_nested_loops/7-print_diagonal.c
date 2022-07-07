#include "main.h"

/**
 * print_diagonal - function outputs \
 *
 *@n: is int
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int row, blank;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (row = 1; row <= n; row++)
	{
		for (blank = 1; blank <= n; blank++)
		{
			if (space < row)
			{
				putchar(' ');
			}
		}
		putchar('\\');
		putchar('\n');
	}
	}
}
