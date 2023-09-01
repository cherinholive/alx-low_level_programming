#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int.
 * @b: char input to be convert
 * Return: the converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int base, len;
	unsigned int result = 0;


	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			result += base;
	}

	return (result);
}
