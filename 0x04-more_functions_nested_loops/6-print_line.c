#include "main.h"

/**
 * print_line - function outputs a line
 *@n: is int for line
 *
 * Return: 0
 */

void print_line(int n)
{
	int ns;

	for (ns = 0; ns < n; ns++)
	{
		if (n <= 0)
		{
			putchar ('\n');
		}
		putchar (95);
	}
	putchar ('\n');
}
