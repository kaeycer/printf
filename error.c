#include <stdio.h>
#include "main.h"

/**
 * error - returns an error if no "" were provided
 * @format: parameter
 * 
 * Return: -1 for failure
*/
int error(const char *format)
{
    if (format == NULL)
        return (-1);
    else
	return (0);
}
