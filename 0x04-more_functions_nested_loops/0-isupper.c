#include "main.h"

/**
 * _isupper - print whether is uppercase
 * @c: parameter to check
 * Return: Either 0 or 1
 */

int _isupper(int c)
{
	char i;
	int result;

	result = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			result = 1;
			break;
		}
	}

	return (result);
}
