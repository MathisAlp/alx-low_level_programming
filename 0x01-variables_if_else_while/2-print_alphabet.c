#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the alphabet
 *
 * Return: Always O (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
