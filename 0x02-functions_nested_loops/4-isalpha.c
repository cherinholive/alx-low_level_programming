#include "main.h"

/**
 * _isalpha - it is alphabet
 * @c: input value
 * Return: 1 if alphabet or 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

