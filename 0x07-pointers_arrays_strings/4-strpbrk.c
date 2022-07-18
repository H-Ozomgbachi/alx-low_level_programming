#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string to search
 * @accept: search param
 * Return: a pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	char *init = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = init;
	}

	return (NULL);
}
