#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - outputs small letters in the alphabet
 *Return: 0 (success)
 */

int main(void)
{
	int c;

	for (c = 0; c < 16; c++)
	{
		if (c < 10)
			putchar(c + '0');
		else
			putchar(c - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
