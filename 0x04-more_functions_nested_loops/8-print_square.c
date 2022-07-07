#include "main.h"

/**
 * print_square - function outputs # square
 *
 *@size: is int
 *
 * Return: 0
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
