#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry function for basic calculator
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: Nothing (void).
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(argv[2], "+") && strcmp(argv[2], "-") && strcmp(argv[2], "*")
	&& strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (!(strcmp(argv[2], "/")) || !(strcmp(argv[2], "%"))))
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(argv[2]);
	printf("%d\n", p(num1, num2));
	return (0);
}
