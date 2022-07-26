#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *res;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	res = malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0, av[i][j]; j++)
		{
			res[k++] = av[i][j];
		}
		res[k++] = '\n';
	}

	res[k] = '\0';
	return (res);
}
