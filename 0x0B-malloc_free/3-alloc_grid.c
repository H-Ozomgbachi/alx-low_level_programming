#include "main.h"

/**
 * alloc_grid - a 2d array
 * @width: width
 * @height: height
 * Return: a pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **res, i, j;

	res = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		res[i] = malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}

	return (res);

	for (i = 0; i < width; i++)
		free(res[i]);
	free(res);
}
