#include <stdio.h>
#include "main.h"

/**
 * _islower - check if text is lower
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int lower = 0;

	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
			break;
		}
	}
	return (lower);
}
