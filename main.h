#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

//Task 1

int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
void print_number(int n, int *count);

#endif /* PRINT_FUNCTIONS_H */

