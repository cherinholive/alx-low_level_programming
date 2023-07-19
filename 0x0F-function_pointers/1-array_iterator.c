#include "main.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @*array: input arrary
 * @size: array len
 * @(*action)(int): input func.
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int s, len;

	s = (int) size;
	len = s - 1;

	for (int i = 0; i < len; i++)
	{
		action(array[i]);
	}
}
