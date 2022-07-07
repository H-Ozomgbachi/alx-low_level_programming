#include <stdio.h>

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 11)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}

			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}
