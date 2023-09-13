#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number to get the last nu,ber from
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (n * -1) % 10;
	else
		last = n % 10;
	_putchar('0' + last);
	return (last);
}
