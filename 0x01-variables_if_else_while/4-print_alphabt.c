#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: excludes e and q
 * in alphabet
 * Return: 0
 */

int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		if (t != 'e' && t != 'q')
		{
			putchar(t);
		}

		t++;
	}

	putchar('\n');
	return (0);
}
