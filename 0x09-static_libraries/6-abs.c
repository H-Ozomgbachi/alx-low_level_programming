#include <stdio.h>
#include "main.h"

/**
 * _abs - Absolute value
 * @n: integer param
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
