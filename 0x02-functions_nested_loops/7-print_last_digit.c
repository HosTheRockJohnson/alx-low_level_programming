#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number to get the last nu,ber from
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	long  last;

	last = n % 10;
	if (n < 0)
		last *= -1;
	_putchar('0' + last);
	return (last);
}
