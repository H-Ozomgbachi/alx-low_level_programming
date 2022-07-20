#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a str
 * @s: string parameter
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
