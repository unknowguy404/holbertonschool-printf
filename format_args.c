#include "main.h"

int format_args(const char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				putchar('%');
				count++;
				break;
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
				format++; // Avanzar solo una vez aquí
			}
			else
			{
				count += process_format(*format, args);
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
