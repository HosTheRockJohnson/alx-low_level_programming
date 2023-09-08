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

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}
