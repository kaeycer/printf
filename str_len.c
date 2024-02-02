#include <stdio.h>
#include "main.h"

/**
 * _str_len - returns the number of characters
 * in a string
 * @str: a string
 *
 * Return: number of char
*/
int _str_len(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    return (i);
}
