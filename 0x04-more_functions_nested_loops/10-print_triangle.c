#include "main.h"

/**
 * print_triangle - function outputs triangle #
 *
 *@size: is int
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i  <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - 1))
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}
			putchar('\n');
		}

	}
}
