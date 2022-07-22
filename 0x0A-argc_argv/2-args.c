#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: zero on success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argv[0])
	{
		for (i = 0; i < argc; i++)
			print("%s\n", argv[i]);
	}

	return (0);
}
