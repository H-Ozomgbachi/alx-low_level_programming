#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name parameter
 * @f: function paramter
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(name) || !(f))
		return;

	f(name);
}
