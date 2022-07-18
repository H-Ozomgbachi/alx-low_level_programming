#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring 
 * @haystack: given string
 * @needle: word to search
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = needle, *j = haystack;

	while (*haystack)
	{
		j = haystack;
		needle = i;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = j + 1;
	}
	return (NULL);
}
