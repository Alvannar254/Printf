#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _print_int - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: The number of digits printed.
 */
int _print_int(int n)
{
	int count = 0;
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}

	if (n / 10)
		count += _print_int(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;

	return (count);
}

/**
 * _print_binary - Prints an unsigned integer in binary format.
 * @n: The unsigned integer to be printed.
 *
 * Return: The number of digits printed.
 */
int _print_binary(unsigned int n)
{
	int count = 0;
	char c;

	if (n / 2)
		count += _print_binary(n / 2);

	c = (n % 2) + '0';
	write(1, &c, 1);
	count++;

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
	char ch;
	char *str;
	int d;
	unsigned int u;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					ch = va_arg(args, int);
					write(1, &ch, 1);
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					while (*str)
					{
						write(1, str, 1);
						str++;
						count++;
					}
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				case 'd':
				case 'i':
					d = va_arg(args, int);
					count += _print_int(d);
					break;
				case 'b':
					u = va_arg(args, unsigned int);
					count += _print_binary(u);
					break;
				default:
					write(1, "%", 1);
					count++;
					write(1, &(*format), 1);
					count++;
					break;
			}
		}
		else
		{
			write(1, &(*format), 1);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}

