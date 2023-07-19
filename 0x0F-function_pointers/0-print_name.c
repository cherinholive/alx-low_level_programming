#include "function_pointers.h"

/**
 * print_name - print name by input func.
 * @name: name to print.
 * @f: function to print the name.
 * Return: none.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
