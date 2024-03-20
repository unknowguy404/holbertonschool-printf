#include "main.h"

int process_decimal(va_list args)
{
	int num = va_arg(args, int);

	return (printf("%d", num));
}

int process_octal(va_list args)
{
	unsigned int octal_num = va_arg(args, unsigned int);

	return (printf("%o", octal_num));
}

int process_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);

	return (printf("%p", ptr));
}

int process_hexadecimal(va_list args)
{
	unsigned int hex_num = va_arg(args, unsigned int);

	return (printf("%x", hex_num));
}

int process_unsigned(va_list args)
{
	unsigned int unsigned_num = va_arg(args, unsigned int);

	return (printf("%u", unsigned_num));
}
