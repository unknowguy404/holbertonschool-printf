#include "main.h"

/**
 * _printf - Main printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	count += print_chr(format, args);
	count += formspecs(format, args);
	count += print_str(format, args);

	va_end(args);

	return (count);
}
