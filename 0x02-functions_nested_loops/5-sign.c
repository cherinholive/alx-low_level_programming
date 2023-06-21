#include "main.h"

/**
 * print_sign - print the sign of input number
 * @n: input value which is int
 * Return 1,0,-1 due on the input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
                return (-1);
	} else
	{
		_putchar('0');
                return (0);
	}
}
