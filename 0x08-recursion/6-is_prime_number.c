#include "main.h"

/**
 * is_prime_number - Function that returns if the number is a prime
 * @n: Number to evaluate if it is a prime number
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

/**
 * get_prime - Get the square root recursively
 * @n: Number to evaluate if it is a prime number
 * @i: Iterator
 *
 * Return: 1 - Prime number | 0 - Not prime number.
 */
int get_prime(int n, int i)
{
	if (n < 2)
		return (0);
	else if (n % i == 0 && i != n)
		return (0);
	else if (i == n)
		return (1);

	return (get_prime(n, i + 1));
}
