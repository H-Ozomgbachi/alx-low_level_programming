#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: first param
 * @to: second param
 */

void set_string(char **s, char *to)
{
	char *temp = to;
	char *val = *s;

	*s = temp;
	to = val;
}
