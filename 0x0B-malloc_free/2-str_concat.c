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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = get_str_len(s1);
	len2 = get_str_len(s2);

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

/**
 * get_str_len - gets length of a string
 * @s: parameter passed
 * Return: length of the string
 */

int get_str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
