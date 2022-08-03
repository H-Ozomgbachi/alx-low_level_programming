#include "function_pointers.h"

/**
 * array_iterator - perform a task on an array
 * @array: array
 * @size: number of elements
 * @action: what to perform
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!(array) || !(action))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
