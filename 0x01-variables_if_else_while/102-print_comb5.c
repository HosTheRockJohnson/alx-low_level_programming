#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - outputs small letters in the alphabet
 *Return: 0 (success)
 */

int main(void)
{
	int c, i;

	for (c = 0; c <= 99; c++)
	{
		for (i = 0; i <= 99; i++)
		{
			if (i == c || c > i)
				continue;
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 99 || c != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
