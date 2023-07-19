#include "main.h"

/**
 * print_name - print name by input func.
 * @*name: name to print.
 * @(*f)(char *): function to print the name.
 * Return: none.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
