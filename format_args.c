#include "main.h"

int format_args(const char *format, va_list args)
{
	int count = 0;
	(void)args;

	while (*format)
	{
		if ((*format + 1) == '%')
		{
			format++;
			if (*format == '\0' || *format != '%')
			{
				putchar('%');
				count++;
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
				format++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	return count;
}
