#include "main.h"

#include "main.h"

int print_string(char *str)
{
	int printed_chars = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		putchar(*str);
		str++;
		printed_chars++;
	}

	return (printed_chars);
}
