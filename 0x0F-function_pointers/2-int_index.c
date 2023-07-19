#include "mainh"

/**
 * int_index -  searches for an integer.
 * element of an array
 * @*array: input arrary
 * @size: array len
 * @(*action)(int): input func.
 *
 * Return: none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
}

