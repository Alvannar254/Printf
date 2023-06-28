#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 12345;
	unsigned int binary = 98, ui = 1234567890, octal = 01234567, hex = 0xABCDEF;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");

	_printf("Integer:[%d]\n", num);
	_printf("Integer:[%i]\n", num);

	_printf("Binary:[%b]\n", binary);
	_printf("Unsigned integer:[%u]\n", ui);
	_printf("Octal:[%o]\n", octal);
	_printf("Hexadecimal (lowercase):[%x]\n", hex);
	_printf("Hexadecimal (uppercase):[%X]\n", hex);

	return (0);
}

