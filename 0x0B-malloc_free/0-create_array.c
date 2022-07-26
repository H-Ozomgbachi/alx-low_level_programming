#include "main.h"

/**
 * create_array - function that creates an array of chars.
 * @size: integer size to allocate
 * @c: specific character to initialize
 * Return: a string
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);

	free(str);
}
