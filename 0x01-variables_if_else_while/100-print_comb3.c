#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - outputs small letters in the alphabet
 *Return: 0 (success)
 */

int main(void)
{
	int c = 0;
	for (c = 1; c <= 99; c++)
	{
		if(c / 10 != c % 10 && c / 10 < c % 10)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			if (c < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
