#include "main.h"

int format_args(const char *format, va_list args)
{
	int count;
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else if (*format == '\0')
			{
				putchar('%');
				count++;
				break;
			}
			else if (*format == '%' && count == 1)
			{
				putchar('%');
				count++;
				format += 1;
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

	if (count > 0 && format[-1] == '%')
	{
		count--;
	}

	return count;
}
