#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 12345;
	unsigned int binary = 98;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");

	_printf("Integer:[%d]\n", num);
	_printf("Integer:[%i]\n", num);

	_printf("Binary:[%b]\n", binary);

	return (0);
}

