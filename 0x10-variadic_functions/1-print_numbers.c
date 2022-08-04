#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers
 * @separator: string separator
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argptr;

	if (!(separator))
		return;

	va_start(argptr, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d%s", va_arg(argptr, int), separator);
		else
			printf("%d", va_arg(argptr, int));
	}

	va_end(argptr);

	printf("\n");
}
