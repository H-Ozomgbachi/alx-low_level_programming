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

	if (width <= 0 || height <= 0)
		return (NULL);

	res = malloc((width + 1) * sizeof(int *));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		res[i] = malloc((height + 1) * sizeof(int));
		if (res[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(res[j]);
			free(res);
			return (NULL);
		}
	}

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
