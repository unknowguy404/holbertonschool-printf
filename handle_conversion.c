#include "main.h"
/**
 * handle_conversion - Handles conversion specifiers in a format string.
 * @specifier: The conversion specifier character.
 * @args: The list of arguments for the format string.
 *
 * Return: The number of characters printed.
 */
unsigned int handle_conversion(char specifier, va_list args)
{
	unsigned int printed_chars = 0;

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
	case 'X':
		printed_chars += process_hexadecimal(args);
		break;
	case 'u':
		printed_chars += manejar_entero_sin_signo(args);
		break;
	default:
		putchar('%');
		putchar(specifier);
		printed_chars += 2;
		break;
	}
	return (printed_chars);
}
