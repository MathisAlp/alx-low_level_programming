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

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
