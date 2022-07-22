#include "main.h"

/**
 * _strcmp - compare string
 * @s1: first
 * @s2: second
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
