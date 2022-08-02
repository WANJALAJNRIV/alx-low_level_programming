#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs.
 * @d: Pointer to a struct dog.
 *
 * Return: Nothing (void).
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
