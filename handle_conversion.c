#include "main.h"
int handle_conversion(char specifier, va_list args)
{
	int printed_chars = 0;

	switch (specifier)
	{
	case 'c':
		putchar(va_arg(args, int));
		printed_chars++;
		break;
	case 's':
		printed_chars += print_string(va_arg(args, char *));
		break;
	case '%':
		putchar('%');
		printed_chars++;
		break;
	case 'd':
	case 'i':
		printed_chars += process_decimal(args);
		break;
	case 'o':
		printed_chars += process_octal(args);
		break;
	case 'p':
		printed_chars += process_pointer(args);
		break;
	case 'x':
		printed_chars += process_hexadecimal(args);
		break;
	case 'u':
		printed_chars += process_unsigned(args);
		break;
	}
	if (specifier != 'c' && specifier != 's' && specifier != '%' &&
		specifier != 'd' && specifier != 'i' && specifier != 'o' &&
		specifier != 'p' && specifier != 'x' && specifier != 'u')
	{
		putchar('%');
		putchar(specifier);
		printed_chars += 2;
	}

	return (printed_chars);
}
