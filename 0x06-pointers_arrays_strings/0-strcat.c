#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: firs
 * @src: second
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[index++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
