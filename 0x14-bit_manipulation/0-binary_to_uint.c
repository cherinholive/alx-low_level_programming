#include "main.h"

/**
 * cal_power - reture result of exponential
 * @base: int base
 * @power: int power / exp
 *
 * Return: result or NULL
 */

int cal_power(int base, int power)
{
	int result = 1;

	if (base == NULL || power == NULL)
		return (NULL);
	
	while (power != 0)
	{
		result *= base;
       		power--;
	}

	return result;
}

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int.
 * @b: char input to be convert
 * 
 * Return: the converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int base = 2, i = 0, j = 0 len;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != "\0"; len++)
		;

	for (j; b[j] != "\0"; j++)
	{
		i = 0;
		power = len - 1;
		i = cal_power(base, power);
		i = i * (int)b[j];
		result += i;
		len--;
	}

	return (result);
}
