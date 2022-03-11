#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char t = 'z';

	while (t >= 'a')
	{
		putchar(t);
		t--;
	}

	putchar('\n');
	return (0);
}
