#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	char *str = dest;

	while (n--)
	{
		*dest = src[i++];
		dest++;
	}

	return (str);
}
