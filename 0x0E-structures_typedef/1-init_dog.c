#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: name
 * @age: age of dog
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
