#include "main.h"
/**
 * parse_format - parses the format string
 * @format: format string
 * @args: arguments list
 *
 * Return: number of printed characters
 */
int parse_format(const char *format, va_list args)
{
	int printed_chars = 0;
	const char *ptr = format;

	while (*ptr)
	{
		if (*ptr == '%')
		{
			if (*(ptr + 1) == '%')
			{
				putchar('%');
				printed_chars++;
				ptr++;
			}
			else
			{
				printed_chars += handle_conversion(*(ptr + 1), args);
				ptr++;
			}
		}
		ptr++;
	}

	va_end(args);

	return printed_chars;
}
