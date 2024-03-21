#include "main.h"

void percent_print(va_list args)
{
	int percent = va_arg(args, int);
	printf("%%", percent);
}
