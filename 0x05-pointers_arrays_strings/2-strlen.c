#include "main.h"

/*
 * _strlen - return len of string
 * @s: string input
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int len = 0, i =  0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		len++;
	}
	return(len);
}
