nclude "main.h"

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

	int num = 12345;
	_printf("Integer:[%d]\n", num);
	_printf("Integer:[%i]\n", num);

	unsigned int binary = 98;
	_printf("Binary:[%b]\n", binary);

	return (0);
}

