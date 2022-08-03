#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name parameter
 * @f: function paramter
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	_putchar('\n');
}