#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: the string
 * @b: the character to fill
 * @n: number of times to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (str);
}
