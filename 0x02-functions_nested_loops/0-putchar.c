#include "main.h"

/**
*  main - print
* Return 0
*/

int main(void)
{
	
        char li[] = ['_', 'p', 'u', 't', 'c', 'h', 'a','r']
        int len, i;
        int len = sizeof(li) / sizeof(char)

        for (i = 0; i < len; i++)
        {
                _putchar(li[i]);
        }
        _putchar("\n");
        return (0);

}
