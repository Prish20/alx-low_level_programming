#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	if (dest == NULL || src == NULL)
	{
		return (dest);
	}

	while (*s)
	{
		s++;
	}

	while (*src)
	{
		*s = *src;
		s++;
		src++;
	}

	*s = '\0';

	return (dest);
}
