#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A type for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: This tells all about the dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
