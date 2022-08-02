#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecopy, *ownercopy;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	owner_copy = malloc(owner_len + 1)
		if (owner_copy == NULL)
			return (NULL);
	for (i = 0; owner[i]; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
