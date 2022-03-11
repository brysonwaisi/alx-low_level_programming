#include <stdio.h>

/**
 * main - Entry point
 * Description: prints single digits no of base 10
 * followed by new line starting from 0
 * Return: 0
 */

int main(void)
{
	char t = '0';

	while (t <= '9')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
