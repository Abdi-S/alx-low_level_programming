#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int c, m;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
