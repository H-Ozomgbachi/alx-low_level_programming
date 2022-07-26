#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;
	char *temp1 = s1;
	char *temp2 = s2;

	while (*s1)
	{
		len1++;
		s1++;
	}

	while (*s2)
	{
		len2++;
		s2++;
	}

	s1 = temp1;
	s2 = temp2;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';

	return (s);

	free(s);
}
