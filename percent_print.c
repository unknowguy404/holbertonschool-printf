#include "main.h"

void percent_print(va_list args)
{
	int i = va_arg(args, int);
	printf("%\n", i);
}
