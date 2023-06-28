#include "main.h"

/**
 * print_u - Prints an unsigned integer.
 * @args: A va_list of arguments.
 * Return: The number of characters printed.
 */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num_copy = num, i = 1, len = 0;
	char *str;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num_copy /= 10)
		i *= 10;

	str = malloc(sizeof(char) * i);
	if (!str)
		return (0);

	while (i)
	{
		*str++ = num / i + '0';
		num %= i;
		i /= 10;
		len++;
	}

	write(1, str - len, len);
	free(str - len);

	return (len);
}

/**
 * print_o - Prints an unsigned integer in octal base.
 * @args: A va_list of arguments.
 * Return: The number of characters printed.
 */
int print_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, len = 0;
	char str[12];

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		str[i++] = (num % 8) + '0';
		num /= 8;
	}

	len = i;
	while (i--)

		write(1, &str[i], 1);

	return (len);
}

/**
 * print_x - Prints an unsigned integer in hexadecimal (lowercase).
 * @args: A va_list of arguments.
 * Return: The number of characters printed.
 */
int print_x(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, len = 0;
	char str[9];

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		str[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	}

	len = i;
	while (i--)
		write(1, &str[i], 1);

	return (len);
}

/**
 * print_X - Prints an unsigned integer in hexadecimal (uppercase).
 * @args: A va_list of arguments.
 * Return: The number of characters printed.
 */
int print_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, len = 0;
	char str[9];

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	while (num)
	{
		str[i++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	}

	len = i;
	while (i--)
		write(1, &str[i], 1);

	return (len);
}

