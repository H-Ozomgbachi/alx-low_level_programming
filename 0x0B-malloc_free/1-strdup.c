#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: parameter string
 * Return: the copied string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len = 0;

	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
	free(s);
}
