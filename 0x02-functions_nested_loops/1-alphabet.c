#include "main.h"

/**
 * print_alphabet - list a-z in lowercase
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

