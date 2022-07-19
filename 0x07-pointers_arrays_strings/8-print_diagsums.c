#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals
 * @a: matrix
 * @size: integer of size
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, max = size * size;

	for (i = 0; i < max; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if (i % (size - 1) == 0 && i <= (size) * (size - 1))
			sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
