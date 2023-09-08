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

	for (c = 1; c <= 999; c++)
	{
		if (c / 100 !=  c % 100 / 10 &&  c % 100 / 10 != c % 10 && c / 100 != c % 10)
		{
			if (c / 100 < c % 100 / 10 && c % 100 / 10 < c % 10)
			{
				putchar(c / 100 + '0');
				putchar(c % 100 / 10 + '0');
				putchar(c % 10 + '0');
				if (c < 789)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
