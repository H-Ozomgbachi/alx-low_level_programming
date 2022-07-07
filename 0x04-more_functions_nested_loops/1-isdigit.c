#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: integer param
 * Return: either 0 or 1
 */

int _isdigit(int c)
{
	int i;
	int result;

	result = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == c - '0')
		{
			result = 1;
			break;
		}
	}

	return (result);
}
