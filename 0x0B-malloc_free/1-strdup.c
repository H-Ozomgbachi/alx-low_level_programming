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

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
	free(s);
}
