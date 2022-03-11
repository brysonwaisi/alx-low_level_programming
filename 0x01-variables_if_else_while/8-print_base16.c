#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

