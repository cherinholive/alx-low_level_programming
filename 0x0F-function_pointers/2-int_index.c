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

	for (int i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}

