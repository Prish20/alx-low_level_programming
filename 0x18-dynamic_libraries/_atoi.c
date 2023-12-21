#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of string
 */

int _atoi(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		num *= 10;
		num += (s[i] - '0');
	}
	return (num);
}
