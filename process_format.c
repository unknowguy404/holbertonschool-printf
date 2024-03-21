#include "main.h"

int process_format(char format, va_list args)
{
	int count = 0;

	if (format == 'c')
	{
		count += process_char(args);
	}
	else if (format == 's')
	{
		count += process_string(args);
	}
	else if (format == 'd' || format == 'i')
	{
		count += process_decimal(args);
	}
	else if (format == 'o')
	{
		count += process_octal(args);
	}
	else if (format == 'p')
	{
		count += process_pointer(args);
	}
	else if (format == 'x' || format == 'X')
	{
		count += process_hexadecimal(args);
	}
	else if (format == 'u')
	{
		count += process_unsigned(args);
	}
	else if (format == '%')
	{
		count += process_percent(args);
	}
	else
	{
		putchar('%');
		putchar(format);
		count += 2;
	}

	return count;
}
