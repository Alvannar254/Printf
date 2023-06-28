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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
						count += print_char(args);
						break;
					case 's':
						count += print_str(args);
						break;
					case '%':
						write(1, "%", 1);
						count++;
						break;
					case 'd':
					case 'i':
						count += _print_int(args);
						break;
					case 'b':
						count += _print_binary(args);
						break;
					case 'u':
						count += print_u(args);
						break;
					case 'o':
						count += print_o(args);
						break;
					case 'x':
						count += print_x(args);
						break;
					case 'X':
						count += print_X(args);
						break;
					default:
						write(1, "%", 1);
						write(1, format, 1);
						count += 2;
						break;
				}
			}
		else
			{
				write(1, format, 1);
				count++;
			}
		format++;
	}

	va_end(args);

	return (count);
}



