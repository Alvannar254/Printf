#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 _printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	_printf("Integer:[%d]\n", 1024);
	_printf("Integer:[%i]\n", -1024);
	_printf("Binary:[%b]\n", 98);
	_printf("Binary:[%b]\n", 255);
	return (0);
}

