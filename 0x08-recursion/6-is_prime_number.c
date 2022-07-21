#include "main.h"

/**
 * is_prime_number - check whether number is prime
 * @n: integer parameter
 * Return: whether prime or not
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}

/**
 * is_divisible - is number divisible
 * @a: integer param
 * @b: integer param
 * Return: is divisible or 0 if numis not divisible
 */

int is_divisible(int a, int b)
{
	if (a % b == 0)
		return (0);
	if (b == a / 2)
		return (1);
	return (is_divisible(a, b + 1));
}
