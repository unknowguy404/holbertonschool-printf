#include "main.h"
/**
 * process_decimal - Process a decimal integer argument.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int process_decimal(va_list args)
{
	int num = va_arg(args, int);

	return (printf("%d", num));
}
/**
 * process_octal - Process an octal integer argument.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int process_octal(va_list args)
{
	unsigned int octal_num = va_arg(args, unsigned int);

	return (printf("%o", octal_num));
}
/**
 * process_pointer - Process a pointer argument.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int process_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);

	return (printf("%p", ptr));
}
/**
 * process_hexadecimal - Process a hexadecimal integer argument.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int process_hexadecimal(va_list args)
{
	unsigned int hex_num = va_arg(args, unsigned int);

	return (printf("%x", hex_num));
}
/**
 * manejar_entero_sin_signo- Process an unsigned integer argument.
 * @args: The argument list.
 *
 * Return: The number of characters printed.
 */
int manejar_entero_sin_signo(va_list args)
{
	unsigned int unsigned_num = va_arg(args, unsigned int);

	return (printf("%u", unsigned_num));
}
