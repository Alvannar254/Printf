#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_format(char format, va_list args);
int _print_int(int n);
int _print_binary(unsigned int n);
int _print_uint(unsigned int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n, int is_uppercase);

#endif /* PRINT_FUNCTIONS_H */
