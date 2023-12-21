#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to beginning of needle in haystack, or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
