#include "main.h"

/**
 * _strcpy - copy string character
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
