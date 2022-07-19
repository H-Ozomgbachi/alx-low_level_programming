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

	for (i = 0; i < max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
