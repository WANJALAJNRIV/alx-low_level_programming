#include "main.h"
/**
 * set_string - Function that sets the value of a pointer to a char.
 * @s: Pointer to a pointer
 * @to: Pointer to a string
 *
 * Return: Nothing (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
