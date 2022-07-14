#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
