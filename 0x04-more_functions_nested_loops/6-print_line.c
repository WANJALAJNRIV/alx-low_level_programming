#include "main.h"

/**
 * print_line - function outputs a line
 *@n: is int for line
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar ('_');
	}
	putchar ('\n');
}
