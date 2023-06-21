#include main.h
#include <unistd.h>

/**
 *_putchar - print a char
 *@c: char to be print
 *
 *Return: success 1
 *error: -1
 */

int _putchar(char ch)
{
  return (write(1, &ch, 1));
}
