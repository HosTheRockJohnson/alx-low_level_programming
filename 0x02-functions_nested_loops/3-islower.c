#include "main.h"
#include <stdbool.h>

/**
 * _islower  -  checks for lowercase character.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	char ch;
	bool lower = false;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			lower = true;
	}
	if (lower)
		return (1);
	else
		return (0);
}
