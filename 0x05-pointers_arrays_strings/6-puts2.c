#include "main.h"

/**
 * puts2 - print even position
 * @str: parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;


	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
}
