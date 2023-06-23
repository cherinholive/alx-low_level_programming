#include "main.h"

/**
 *print_last_digit - print the last number
 *@n: input value integer
 * return: abs value
 *
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n=-n

	last = n % 10;

	if (last < 0)
		last = last

	_putchar(last + '0');

	return (a);
}
