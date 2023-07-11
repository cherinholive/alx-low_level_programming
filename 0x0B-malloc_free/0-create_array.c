#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of array
 * @c: initialize value.
 * Return: NULL, if size is zero or ponit of array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *result = (char *)malloc(size * sizeof(char));
		unsigned int i;

		if (result == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			result[i] = c;
		return (result);
	}
}
