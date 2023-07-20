#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a
 *  new line with separator provided.
 *  @separator: input char (divider)
 *  @n: len arg pass
 *  @...: futher more arg.
 *
 *  Return: Null or pint the list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x;

	if (separator == NULL)
		;
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(arg, int);
			printf("%d%c", x, separator);
		}
	}
	
}
