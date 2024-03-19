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
			else if (*format == 'o')
			{
				unsigned int octal_num = va_arg(args, int);
				count += printf("%o", octal_num);
			}
			else if (*format == 'x' || *format == 'X')
			{
				unsigned int hex_num = va_arg(args, int);
				count += printf("%x", hex_num);
			}
			else if (*format == 'p')
			{
				void *ptr = va_arg(args, void *);
				count += printf("%p", ptr);
			}
			else if (*format == 'u')
			{
				unsigned int num = va_arg(args, unsigned int);
				count += printf("%u", num);
			}
			else if (*format == 'r')
			{
				count += printf("%%%r");
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
