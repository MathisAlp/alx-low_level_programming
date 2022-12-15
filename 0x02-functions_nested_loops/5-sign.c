#include "main.h"

/**
 * print_sign - sign of a number
 * @n : an input int
 *
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 *
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		a = -1;
		_putchar('-');
	}
	else
	{
		a = 0;
		_putchar('0');
	}
	return (a);
}
