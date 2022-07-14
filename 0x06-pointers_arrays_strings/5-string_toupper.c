#include "main.h"

/**
 * *string_toupper - convert string to upper string
 * @input: input string to convert
 * Return: converted string
 */

char *string_toupper(char *input)
{
	int i = 0;

	while (input[i++])
	{
		if (input[i] >= 'a' && input[i] <= 'z')
			input[i] -= 32;
	}

	return (input);
}
