#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet
 *
 * Return: Always O (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
