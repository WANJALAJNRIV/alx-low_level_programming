#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: Pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_cpy;
	char *owner_cpy;

	name_cpy = malloc(sizeof(char) * _strlen(name));
	owner_cpy = malloc(sizeof(char) * _strlen(owner));

	if (name_cpy == NULL || owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}

	_strcpy(name_cpy, name);
	_strcpy(owner_cpy, owner);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}

	my_dog->name = name_cpy;
	my_dog->age = age;
	my_dog->owner = owner_cpy;

	return (my_dog);
}

/**
 * _strcpy - Copy a string
 * @dest: Pointer to the string array for copying
 * @src: Number of elements to extract
 *
 * Return: Nothing
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - Determines the length of a string.
 * @s: Set of characters
 *
 * Return: Nothing
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
