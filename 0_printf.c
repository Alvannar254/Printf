#include "main.h"

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
