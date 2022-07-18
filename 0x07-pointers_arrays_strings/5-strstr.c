#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: given string
 * @needle: word to search
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			b++;
		}

		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
