#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet
 *
 * Return: Always O (success)
 */
int main(void)
{
	char n;
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
