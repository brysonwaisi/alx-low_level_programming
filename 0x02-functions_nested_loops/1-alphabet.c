#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}

	_putchar('\n');

	return (0);
}
