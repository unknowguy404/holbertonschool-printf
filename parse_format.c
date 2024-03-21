#include "main.h"

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
			ptr++;
			if (*ptr == '%')
			{
				putchar('%');
				printed_chars++;
			}
			else
			{
				printed_chars += handle_conversion(*ptr, args);
			}
		}
		ptr++;
	}

	return printed_chars;
}
