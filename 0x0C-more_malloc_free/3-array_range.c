#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: from
 * @max: to
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *n, space, i;

	if (min > max)
		return (NULL);
	space = (max - min) + 1;
	n = malloc(space * sizeof(int));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < space; i++)
		n[i] = min++;

	return (n);
}
