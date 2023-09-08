#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if the last digit of a given number is 0, smaller than 6 but not 0, or bigger than 5
 Return: Always (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n%10 > 0)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
    }
	else if (n%10 == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, n%10);
    }
	else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n%10);
    }
	return (0);
}
