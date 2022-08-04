#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list argptr;

	if (n == 0)
		return (0);

	va_start(argptr, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(argptr, int);

	va_end(argptr);

	return (sum);
}
