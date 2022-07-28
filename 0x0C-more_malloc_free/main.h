#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int get_str_len(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*MAIN_H*/
