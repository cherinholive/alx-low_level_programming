#include "main.h"

/**
 *
 * main - list a-z
 *
 * Return: 0
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
		_putchar('\n');
	}
	return (0);
}

