#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes to copy
 * Return: string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, i, j;
	char *temp1 = s1;
	char *temp2 = s2;

	if (s1 == NULL)
		temp1 = "";
	if (s2 == NULL)
		temp2 = "";

	len1 = get_str_len(temp1);
	s = malloc(len1 + n + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = *temp1;
		temp1++;
	}
	for (j = 0; j < n; j++)
	{
		s[i++] = *temp2;
		temp2++;
	}
	s[i] = '\0';
	return (s);
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
