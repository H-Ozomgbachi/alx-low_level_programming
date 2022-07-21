#include "main.h"

/**
 * _sqrt_recursion - square root of a number
 * @n: integer param
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_helper(1, n));
}

/**
 * _helper - help find square root
 * @i: iterator to hold previous value
 * @r: root
 * Return: the answer
 */

int _helper(int i, int r)
{
	if (i > r)
		return (-1);
	else if (i * i == r)
		return (i);
	return (_helper(i + 1, r));
}
