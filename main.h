#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);

int parse_format(const char *format, va_list args);
unsigned int handle_conversion(char specifier, va_list args);
int parse_format(const char *format, va_list args);
int print_string(char *str);
int process_decimal(va_list args);
int process_octal(va_list args);
int process_pointer(va_list args);
int process_hexadecimal(va_list args);
int process_unsigned(va_list args);

#endif /** MAIN_H*/
