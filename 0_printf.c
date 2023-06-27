#include "main.h"

/**
 * print_char - Prints a character.
 * @args: A va_list of arguments.
 * Return: Always 1 (the number of printed characters).
 */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (write(1, &ch, 1));
}

/**
 * print_str - Prints a string.
 * @args: A va_list of arguments.
 * Return: The number of printed characters.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		write(1, str++, 1);
		count++;
	}
	return (count);
}

/**
 * print_format - Prints characters according to the format.
 * @format: The conversion specifier.
 * @args: A va_list of arguments.
 * Return: The number of printed characters.
 */
int print_format(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			return (print_char(args));
		case 's':
			return (print_str(args));
		case '%':
			write(1, "%", 1);
			return (1);
		default:
			write(1, "%", 1);
			write(1, &format, 1);
			return (2);
	}
}

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
			count += print_format(*format, args);
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

