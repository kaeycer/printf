#include <stdio.h>
#include "main.h"

/**
 * print_string - prints a string to the standard output
 * @str: string
*/
void print_string(char *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        putchar(str[n]);
        n++;
    }
}
