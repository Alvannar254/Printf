#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
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
						write(1, str++, 1);
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
				case 'u':
					u = va_arg(args, unsigned int);
					count += _print_uint(u);
					break;
				case 'o':
					u = va_arg(args, unsigned int);
					count += _print_octal(u);
					break;
				case 'x':
					u = va_arg(args, unsigned int);
					count += _print_hex(u, 0);
					break;
				case 'X':
					u = va_arg(args, unsigned int);
					count += _print_hex(u, 1);
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


