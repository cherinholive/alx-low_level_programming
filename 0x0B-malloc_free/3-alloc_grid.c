#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a pointer to a 2 dimensional array of integers.
 * width: width of 2d array.
 * height: height of 2d array.
 * return: null on failure and either width or height = 0
 * or pointer of 2d array.
 */

int **alloc_grid(int width, int height)
{
 	int **result = (int **)malloc(sizeof(int) * (width * height));
	int i, j;

        if (width == 0 || height == 0)
                return (NULL);

        if (result == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
		for (k = 0; k < width; k++)
			*(result + i * width + j) = 0;

	return (result);	
}
