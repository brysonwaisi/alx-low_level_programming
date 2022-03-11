#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * prints in uppercase afterward then new line
 * Return:0
 */

int main(void)
{
	char t = 'a';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}

	t = 'A';

	while (t <= 'Z')
	{
		putchar(t);
		t++;
	}

	putchar('\n');
	return (0);
}
