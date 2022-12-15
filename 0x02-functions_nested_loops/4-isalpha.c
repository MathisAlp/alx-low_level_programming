#include "main.h"

/**
 * _isalpha - Check for the alphabetic caractere
 *@c: an input char
 *
 * Return: On succes 0.
 * On error 1 is returned
 *
 */

int _isalpha(int c)
{
	char i, j;
	int isAlpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				isAlpha = 1;
		}
	}

	return (isAlpha);
}
