#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
				{
					count += printf("(null)");
				}
				else
				{
					while (*str)
					{
						putchar(*str);
						str++;
						count++;
					}
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				count += printf("%d", num);
			}
			else if (*format == 'o')
			{
				unsigned int octal_num = va_arg(args, int);
				count += printf("%o", octal_num);
			}
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);
				count += printf("%p", ptr);
			}
			else if (*format == 'x' || *format == 'X')
			{
				unsigned int hex_num = va_arg(args, int);
				count += printf("%x", hex_num);
			}
			else if (*format == 'u')
			{
				unsigned int unsigned_num = va_arg(args, int);
				count += printf("%u", unsigned_num);
			}
			else
			{
				putchar('%');
				putchar(*format);
				count++;
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
	return count;
}
