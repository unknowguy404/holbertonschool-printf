#include "main.h"

int _printf(const char *format, ...)
{
	const char *ptr;
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			putchar('%');
			printed_chars++;
		}
		else
		{
			putchar(*ptr);
			printed_chars++;
		}
	}

	va_end(args);
	return printed_chars;
}
