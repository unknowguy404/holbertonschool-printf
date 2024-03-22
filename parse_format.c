#include "main.h"

/**
 * parse_format - Parse a format string and print the formatted output.
 * @format: The format string to parse.
 * @args: The list of arguments for the format string.
 *
 * Return: The number of characters printed.
 */
int parse_format(const char *format, va_list args)
{
	int printed_chars = 0;
	const char *ptr = format;

	while (*ptr)
	{
		if (*ptr != '%')
		{
			putchar(*ptr);
			printed_chars++;
		}
		else
		{
			if (*(ptr + 1) == '%')
			{
				putchar('%');
				printed_chars++;
				ptr++;
			}
			else
			{
				if (*(ptr + 1) == '\0')
				{
					return (-1);
				}
				printed_chars += handle_conversion(*(ptr + 1), args);
				ptr++;
			}
		}
		ptr++;
	}
	va_end(args);
	return (printed_chars);
}
