#include "main.h"
int process_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		count += (printf("(null)"));
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

	return (count);
}
