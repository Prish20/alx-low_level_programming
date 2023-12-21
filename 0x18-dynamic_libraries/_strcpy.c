#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to
 * by dest
 * @dest: buffer to copy string to
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
