#include "variadic_functions.h"

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
	{
	}
	else
	{
		va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(arg, int);
			printf("%d", x);

			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		
		printf("\n");
		va_end(arg);
	}
	
}
