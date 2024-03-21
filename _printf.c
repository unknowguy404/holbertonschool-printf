#include "main.h"

/**
 * _printf - Main printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);
	printed_chars = parse_format(format, args);
	va_end(args);

	return (printed_chars);
}
