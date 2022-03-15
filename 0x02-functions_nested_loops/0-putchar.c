#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return:0
 */

int main(void)
{
	char word[9] = "_putchar\n";
	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}

	return (0);
}

