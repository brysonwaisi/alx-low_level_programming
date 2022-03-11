#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int b = 0;

	while (b < 10)
	{
		putchar(48 + b);

		if (b !=9)
		{
			putchar(',');
			putchar(' ');
		}

		b++;
	}

	putchar('\n');

	return (0);

}
