#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a pointer to a 2 dimensional array of integers.
 * width: width of 2d array.
 * height: height of 2d array.
 * Return: null on failure and either width or height = 0
 * or pointer of 2d array.
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = (int **)malloc(sizeof(int) * height);

	if (result == NULL)
	{
		free(result);
                return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);
		if (result == NULL)
		{
			for (i--; i > 0; i--)
				free(result[i]);
			free(result);
			return (NULL);
		}
	}

 	for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			*(result[i][k] = 0;

	return (result);
}
