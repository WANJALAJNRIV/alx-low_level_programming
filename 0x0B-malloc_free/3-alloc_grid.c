#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: Width.
 * @height: Height
 *
 * Return: Pointer to the array or NULL.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, k = 0;
	int **p;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			for (; i >= 0; i--)
			{
				free(*(p + i));
			}
			free(p);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			*(*(p + j) + k) = 0;
		}
	}

	return (p);
}
