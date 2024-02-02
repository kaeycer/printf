#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints every parameter passed to it
 * @format: this is the directive parsed to be printed
 *
 * Return: -1 for fail
*/
int _printf(const char *format, ...)
{
	int i = 0;
	char c;
	char *str;

	va_list par;

	va_start(par, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				c = va_arg(par, int);
				_putchar(c);
				break;
			case 's':
				str = va_arg(par, char *);
				print_string(str);
				break;
			default:
				break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(par);
	_putchar('\n');
	return (error(format));
}
