#include "main.h"

int _printf(const char *format, ...)
{
	const char *ptr;
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	// Movemos la declaración de ptr al principio del bloque

	// Recorremos la cadena de formato
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			putchar('%'); // Imprimimos un '%' en la consola
			printed_chars++;
		}
		else
		{
			putchar(*ptr); // Imprimimos el carácter actual en la consola
			printed_chars++;
		}
	}

	va_end(args);
	return printed_chars;
}
