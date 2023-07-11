#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: string input 1.
 * @s2: string input 2.
 *
 * Return: null on failed, or concateneted string.
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, k;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	result = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; i <= l1; i++)
	{
		result[i] = s1[i];
	}

	for (k = 0; k <= l1; k++)
 	{
		result[i] = s2[k];
	}

	return (result);
}