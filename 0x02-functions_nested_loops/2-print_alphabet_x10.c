#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char b;
	int i = 0;

	while (i < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;

	}
}
