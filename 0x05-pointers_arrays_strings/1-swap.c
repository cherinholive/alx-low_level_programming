#include "main.h"

/*
 * swap_int - swapping value
 * @*a: input pointer of int
 * @*b: input pointer of int
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;

}
