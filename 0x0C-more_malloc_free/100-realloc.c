#include "main.h"

/**
 * _realloc - reallocates a memory
 * @ptr: ptr to previous alloc
 * @old_size: old size
 * @new_size: new size
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc, *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_loc = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_loc[i] = new_ptr[i];
	free(ptr);
	return (new_loc);
}
