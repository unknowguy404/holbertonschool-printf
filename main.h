#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int _printf(const char *format, ...);
int format_args(const char *format, va_list args);
int process_format(char format, va_list args);
int process_char(va_list args);
int process_string(va_list args);
int process_decimal(va_list args);
int process_octal(va_list args);
int process_pointer(va_list args);
int process_hexadecimal(va_list args);
int process_unsigned(va_list args);
#endif /** MAIN_H*/
