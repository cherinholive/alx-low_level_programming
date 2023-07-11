#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @*str: input pointer
 * Return: Null if str = null and insuff. memory or pointto new memory.
 */

char *_strdup(char *str)
{
	unsigned int i, k;
	char *result;

	if (str == NULL)
                return (NULL);

	for (i = 0; str[i] != '\0'; i++)
			;

	result = (char *)malloc((i + 1) * sizeof(str));
		
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		result[k] = str[k];
	}

	return (result);
}
