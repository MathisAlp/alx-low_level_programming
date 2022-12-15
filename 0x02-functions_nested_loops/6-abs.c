#include "main.h"

/**
 * _abs - the absolute value of an integer
 * @n : an input int
 *
 * Return: The absolute of an integer
 *
 */
int _abs(int n)
{
	int a;

	if (n >= 0)
	{
		a = n;
	}
	else
	{
		a = n * -1;
	}
	return (a);
}
