#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r : an input int
 *
 * Return: The last digit of a number
 *
 */
int print_last_digit(int r)
{
	int ld;

	if (r >= 0)
	{
		ld = r % 10;
	}
	else
	{
		ld = (r % 10) * -1;
	}
	_putchar((ld) + '0');
	return (ld);
}
