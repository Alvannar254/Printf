#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_format(char format, va_list args);
void print_number(int n, int *count);

#endif /* PRINT_FUNCTIONS_H */

