#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: Number to get the factorial
 *
 * Return: Result of the factorial (int).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
