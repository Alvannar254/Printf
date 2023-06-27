#include "main.h"

/**
 * _printf -Writes a single character to stdout and increments the count.
 * @ch: The character to writ
 *
 *@count: Pointer to the count ot characters printed
 * Return: The number of characters printed.
 */

void write_char(char ch, int *count)
{
	write(1, &ch, 1);
	(*count)++;
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
					write_char(ch, &count);
					break;
				case 's':
					str = va_arg(args, char *);
					while (*str)
					{
						write_char(*str, &count);
						str++;
					}
					count++;
					break;
				case '%':
					write_char('%', &count);
						break;
				default:
						write_char('%', &count);
						write_char(*format, &count);
						break;
			}
		}
		else
		{
			write_char(*format, &count);
		}
		format++;
	}

	va_end(args);

	return (count);
}
