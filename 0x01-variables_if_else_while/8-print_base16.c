#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: hexadecimals in lower case
 *
 * Return:0
 */

int main(void)

{
	char t = '0';

	while (t <= '9')
	{
		putchar(t);
		t++;
	}

	char x = 'a';

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}

