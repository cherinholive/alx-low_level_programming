#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a 
 * parameter on each element of an array.
 * @array: input arrary
 * @size: array len
 * @action: input func.
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ( action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
