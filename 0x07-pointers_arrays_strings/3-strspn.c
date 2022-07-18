#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix 
 * substring.
 * @s: string parameter
 * @accept: prefix
 * Return: number of bytes in the initial segment of s which con
 * sist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, flag = 0;

	char *init = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		if (flag == 0)
			break;
		s++;
		accept = init;
	}
	return (count);
}
