#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#define va_arg(ap, type) __builtin_va_arg(ap, type)

int _printf(const char *format, ...);

int parse_format(const char *format, va_list args);
int handle_conversion(char specifier, va_list args);
int print_string(char *str);
int format_args(const char *format, va_list args);
int process_format(char format, va_list args);
int process_char(va_list args);
int process_string(va_list args);
int process_decimal(va_list args);
int process_octal(va_list args);
int process_pointer(va_list args);
int process_hexadecimal(va_list args);
int process_unsigned(va_list args);
int process_percent(void);
void process_special(const char **format, va_list args);
void percent_print(va_list args);
#endif /** MAIN_H*/
