#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0(succes)
 *
 */

int main(void)
{
	int i;
	char mot[8] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(mot[i]);

	_putchar('\n');
	return (0);
}

