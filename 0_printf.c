#include "main.h"

/**
 * print_c - prints character c
 * @c: the character to print
 *
 * Return: Number of characters printed
 */
int print_c(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - prints string s
 * @s: the string to print
 *
 * Return: Number of characters printed
 */
int print_s(char *s)
{
	int count = 0;

	while (*s)
	{
		count += print_c(*s);
		s++;
	}
	return (count);
}

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_c(va_arg(args, int));
					break;
				case 's':
					count += print_s(va_arg(args, char *));
					break;
				case '%':
					count += print_c('%');
					break;
				default:
					count += print_c('%');
					count += print_c(*format);
					break;
			}
		}
		else
		{
			count += print_c(*format);
		}
		format++;
	}

	va_end(args);

	return (count);
}
