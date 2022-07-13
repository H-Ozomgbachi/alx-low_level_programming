#include "main.h"

/**
 * _atoi - convert to int
 * @s: string
 * Return: an int
 */

int _atoi(char *s)
{
	int i;
	int result = 0;
	int sign = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10;
			result -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	result = sign * result;
	return (result);
}
