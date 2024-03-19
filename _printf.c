#include "main.h"

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
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				while (*str)
				{
					putchar(*str);
					str++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
			}
			else if (*format == 'd' || *format == 'i')
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
	return count;
}
