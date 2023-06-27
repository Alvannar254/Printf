Printf group project 

#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);


int print_char(va_list types, char buffer[],int flags, int width, int precision, int size);

int print_pre(const char *format, int *i, va_list list);

/************************* PRINT A STRING *************************/

int print_string(va_list types);

/************************* PRINT PERCENT SIGN *************************/

int print_percent(va_list types);

/************************* PRINT INT *************************/

int print_int(va_list types);

/************************* PRINT BINARY *************************/

int print_binary(va_list types);

va_start(args, print_functions);

/************************* PRINT UNSIGNED NUMBER *************************/
int print_unsigned(va_list types);

/************* PRINT UNSIGNED NUMBER IN OCTAL  ****************/
int print_octal(va_list types);

/************** PRINT UNSIGNED NUMBER IN HEXADECIMAL **************/
int print_hexadecimal(va_list types);

/************* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL **************/
int print_hexa_upper(va_list types);


#define BUFF_SIZE 1024

/* Function declarations */
int print_custom_pointer(va_list types);
int print_custom_non_printable(va_list types);
int print_custom_reverse(va_list types);
int print_custom_rot13string(va_list types);

/* Helper function declarations */
int is_custom_printable(char c);
int append_custom_hexa_code(char c, char buffer[], int index);
int write_custom_pointer(char buffer[], int index, int length);

#endif /* PRINT_FUNCTIONS_H */


