#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0') // Verifica si el siguiente carácter es nulo
			{
				putchar('%');
				count++;
				break; // Sale del bucle para evitar seguir procesando el formato
			}
			else if (*format == '!') // Nuevo caso para '%!'
			{
				putchar('%');
				putchar('!');
				count += 2;
			}
			else if (*format == 'K') // Nuevo caso para '%K'
			{
				putchar('%');
				putchar('K');
				count += 2;
			}
			else if (*format == 'c')
			{
				int c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
				{
					count += printf("(null)");
				}
				else
				{
					while (*str)
					{
						putchar(*str);
						str++;
						count++;
					}
				}
			}
			// Agregar casos para otros tipos de formato según sea necesario
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return count;
}
