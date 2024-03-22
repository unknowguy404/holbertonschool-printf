#include "main.h"
/**
 * print_string - Print a string with putchar.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
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
