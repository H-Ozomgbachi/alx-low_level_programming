#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: given array
 * @size: size of array
 * @cmp: comparer function
 * Return: index of the number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (!(array) || !(cmp))
		return (res);
	if (size <= 0)
		return (res);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			res = i;
			break;
		}
	}

	return (res);
}
