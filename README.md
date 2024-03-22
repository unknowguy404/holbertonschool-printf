# holbertonschool-printf

# \_printf Function

## Description

This project implements a custom version of the `printf` function in C. The `_printf` function takes a format string and a variable number of arguments, similar to the standard `printf`, and prints the formatted output to the standard output.

## Usage

To use the `_printf` function, include the `main.h` header file in your C program and call `_printf` with a format string and any additional arguments as needed. For example:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int num = 10;
    char *str = "Hello, World!";
    _printf("Number: %d\nString: %s\n", num, str);
    return (0);
}

```

Supported Conversion Specifiers
%c: Character
%s: String
%%: Percent sign
%d, %i: Signed decimal integer
%o: Unsigned octal
%p: Pointer
%x, %X: Unsigned hexadecimal integer
%u: Unsigned decimal integer
Notes
The function does not support all the features of the standard printf, such as width and precision specifiers.
Some conversion specifiers may behave differently than in the standard printf, so it's recommended to test thoroughly before using in production code.
Author
This project was developed by Thais Rodriguez and Nelson Betancourt for the Holberton School printf project.
