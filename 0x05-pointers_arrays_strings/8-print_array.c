#include "main.h"
#include <stdio.h>

/**
 * print_array - print array elements
 * @a: given array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}

	_putchar('\n');
}
