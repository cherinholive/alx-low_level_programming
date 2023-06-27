#include "main.h"

/*
 * _strlen - return len of string
 * @s: string input
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
		len++
	return(len);
}
