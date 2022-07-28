#include "main.h"

/**
 * calloc - function that allocates memory for an array
 * @nmemb: number of members in array
 * @size: size of each byte
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	s = malloc(nmemb * size);

	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);
}
