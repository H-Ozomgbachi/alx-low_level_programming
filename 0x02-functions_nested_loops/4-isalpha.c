#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if text is alpha
 * @c: a character params
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	int isalpha = 0;

	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			isalpha = 1;
			break;
		}
	}
	
	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
		{
			isalpha = 1;
			break;
		}
	}

	return (isalpha);
}
