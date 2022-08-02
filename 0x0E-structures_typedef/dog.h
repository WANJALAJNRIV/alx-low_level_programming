#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Creates a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Onwer's name of the dog
 *
 * Description: Creates a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif /* DOG */
