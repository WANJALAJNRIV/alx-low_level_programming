#include <stdio.h>
/**
 * main - function prints out a[2] = 98 followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Remember:
	 * - you are not allowed to modify p and to code anything else
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
