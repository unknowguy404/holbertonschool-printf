#include "main.h"
/**
 * print_chr - Handle printing characters
 * @format: Format string
 * @args: Variable argument list
 * Return: count if succesful
 */
int print_chr(const char *format, va_list args)
{
	unsigned int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0' && *(format + 1) != '%')
		{
			putchar('%');
			count++;
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
