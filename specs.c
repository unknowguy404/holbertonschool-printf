#include "main.h"
/**
 * formspecs - prints format specifiers
 * @format*/

int formspecs(const char *format, va_list args)
{
	unsigned int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			putchar(*format++);
			switch (*format)
			{
				case 'd': case 'i': case 'o': case 'x': case 'X': case 'u':
					putchar(*format++);
					count += putchar(va_arg(args, unsigned int) + '0');
					break;
				case 'p':
				{
					void *ptr = va_arg(args, void *);

					count += printf("%p", ptr);
					break;
				}
				default:
				putchar(*format++);
				count++;
			}
		}
		else
		{
			putchar(*format++);
			count++;
		}
	}
	return (count);
}
