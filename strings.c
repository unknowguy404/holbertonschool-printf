#include "main.h"

/**
 * print_str - Handle printing strings
 * @format: Format string
 * @args: Variable argument lis
 * Return: Number of characters printed
 */
int print_str(const char *format, va_list args)
{
	unsigned int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 's')
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
			format += 2;
		}
		else
		{
			format++;
		}
	}
	return (count);
}
