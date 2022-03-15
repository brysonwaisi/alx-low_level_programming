#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char b[10] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(b[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
