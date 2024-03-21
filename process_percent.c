#include "main.h"

int process_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
