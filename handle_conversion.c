#include "main.h"
int handle_conversion(char specifier, va_list args)
{
	int printed_chars = 0;

	switch (specifier)
	{
	case 'c':
	{
		char c = va_arg(args, int);
		putchar(c);
		printed_chars++;
		break;
	}
	case 's':
	{
		char *s = va_arg(args, char *);
		printed_chars += print_string(s);
		break;
	}
	case '%':
	{
		putchar('%');
		printed_chars++;
		break;
	}
	default:
		break;
	}

	return printed_chars;
}
