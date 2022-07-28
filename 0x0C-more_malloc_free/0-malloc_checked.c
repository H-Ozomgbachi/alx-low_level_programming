#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: uint parameter
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
