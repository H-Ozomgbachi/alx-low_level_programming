#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: value
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int x = n;

		while (x < 99)
		{
			printf("%d", x);
			if (x == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			x++;
		}
	}
	else
	{
		int y = n;

		while (y >= 98)
		{
			printf("%d", y);
			if (y == 98)
				break;
			_putchar(',');
			_putchar(' ');
			y--;
		}
	}
}
