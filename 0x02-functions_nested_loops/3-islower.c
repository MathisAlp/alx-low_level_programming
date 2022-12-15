#include "main.h"

/**
 * _islower - Check the lowercase caractere
 *@c: an input char
 *
 * Return: On succes 1.
 * On error 0 is returned
 *
 */

int _islower(int c)
{
	char i;
	int isLower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			isLower = 1;
	}

	return (isLower);
}
