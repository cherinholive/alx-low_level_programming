#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arg.
 * @...: accept list parameters.
 *
 * Return: 0 if n =0 or the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x, sum = 0;

	if (n == 0)
		return (sum);

	va_start(arg, n);

	for (i = n; i < n; i++)
		sum += (int) va_arg(arg, int);


	va_end(arg);

	return (sum);
}
