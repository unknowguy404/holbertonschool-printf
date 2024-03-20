#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = format_args(format, args);
	va_end(args);

	return count;
}
