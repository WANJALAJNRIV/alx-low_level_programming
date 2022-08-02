#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to a struct dog.
 * @name: Name
 * @age: Age
 * @owner: Owner's name
 *
 * Return: Nothing (void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
