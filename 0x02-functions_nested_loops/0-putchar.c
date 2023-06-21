#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*  main - print
* Return 0
*/

int main(void)
{
	
        char li[] = "_putchar";
        int len, i;
        len = strlen(li);

        for (i = 0; i < len; i++)
        {
                _putchar(li[i]);
        }
        _putchar("\n");
        return (0);

}
