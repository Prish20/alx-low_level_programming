#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);

	/* Calculate the length of the string */
	while (b[len] != '\0')
		len++;

	/* Convert binary to unsigned int using bitwise operations */
	for (i = 0; i < len; i++)
	{
		/* Check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Left shift result and add current bit */
		result <<= 1;
		if (b[i] == '1')
			result |= 1;
	}

	return (result);
}

