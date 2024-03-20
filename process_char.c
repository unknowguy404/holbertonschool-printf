#include "main.h"
int process_char(va_list args)
{
	int c = va_arg(args, int);

	putchar(c);
	return (1);
}
