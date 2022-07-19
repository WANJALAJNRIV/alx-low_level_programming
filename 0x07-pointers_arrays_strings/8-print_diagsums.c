#include "main.h"
/**
 * print_diagsums - Prints the sum of two diagonals of a matrix of integers
 * @a: Pointer to an array of pointers
 * @size: Size of the matrix
 *
 * Return: Nothing (void)
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	long int result1 = 0;
	long int result2 = 0;

	while (i < (size * size))
	{
		result1 += *(a + i);
		i += (size + 1);
	}
	printf("%ld", result1);

	while (j < (size * size) - 1)
	{
		result2 += *(a + j);
		j += (size - 1);
	}
	printf(", %ld\n", result2);
}
