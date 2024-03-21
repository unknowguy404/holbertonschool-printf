#include "main.h"

void process_special(const char **format, va_list args)
{
	switch (**format)
	{
	case 'c':
		putchar(va_arg(args, int));
		break;
	case 's':
		fputs(va_arg(args, const char *), stdout);
		break;
	case '%':
		putchar('%');
		break;
	default:
		fprintf(stderr, "Error: Unsupported conversion %%");
		break;
	}
}
