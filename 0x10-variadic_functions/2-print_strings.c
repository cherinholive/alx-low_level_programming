#include "variadic_functions.h"

/**
 * print_strings - that prints strings, followed by a new line
 *  @separator: input char (divider)
 *  @n: len arg pass
 *  @...: futher more arg.
 *
 *  Return none.
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
			x = va_arg(arg, char);
			if (!x)
				printf("(nil)");
			else
				printf("%s", x);

			if (i < n - 1)
				if (separator)
					printf("%s", separator);
		}

		printf("\n");
		va_end(arg);
	}
}
