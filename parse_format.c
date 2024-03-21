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
			if (*(ptr + 1) == '\0')
			{
				putchar('%');
				printed_chars++;
			}
			else
			{
				printed_chars += handle_conversion(*(ptr + 1), args);
				ptr++;
			}
		}
		ptr++;
	}

	return printed_chars;
}
