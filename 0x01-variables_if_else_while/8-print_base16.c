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
	int t;
	char c;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

