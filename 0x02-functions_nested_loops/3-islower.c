#include "main.h"

/**
 * _islower - if c is a lowercase
 *@c: input to fun and value to check
 *Return: 1 if lower or 0 if not
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
