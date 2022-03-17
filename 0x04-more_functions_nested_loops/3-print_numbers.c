#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char b = 0;

	while (b <= 9)
	{
		_putchar(48 + b);
		b++;
	}
	_putchar('\n');
	return (0);
}
