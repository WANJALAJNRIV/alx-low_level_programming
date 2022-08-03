#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Get the appropiate function according to the symbol
 * @s: String
 *
 * Return: Pointer to a function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 6)
	{
		if (!(strcmp(s, ops[i].op)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
