#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: given string
 * @c: character to find
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('0');
}
