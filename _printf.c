#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    unsigned int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
            {
                putchar('%');
                count++;
                break;
            }
            else if (*format == 'c')
            {
                int c = va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                if (str == NULL)
                {
                    count += printf("(null)");
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
            }
            else if (*format == '%')
            {
                putchar('%');
                count++;
            }
            else
            {
                putchar('%');
                putchar(*format);
                count += 2;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

