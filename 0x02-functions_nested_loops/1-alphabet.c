#include "main.h"

/**
 *
 * main - list a-z
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
		_putchar('\n');
	}
}

