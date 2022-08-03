#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Iterates over an array and calls a function
 * @array: Array
 * @size: Size
 * @action: Pointer to a function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(*(array + i));
}
