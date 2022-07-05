#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints letters of English alphabets 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
