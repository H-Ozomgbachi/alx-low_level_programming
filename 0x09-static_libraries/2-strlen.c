#include "main.h"

/**
 * _strlen - print length of string
 * @s: param to print
 * Return: an integer of the length of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
