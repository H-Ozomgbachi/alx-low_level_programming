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

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if ( i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
