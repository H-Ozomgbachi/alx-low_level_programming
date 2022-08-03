#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
