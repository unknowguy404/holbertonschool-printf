#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/*
 * Custom printf function that handles conversion specifiers %d and %i
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				count += printf("%d", num);
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
