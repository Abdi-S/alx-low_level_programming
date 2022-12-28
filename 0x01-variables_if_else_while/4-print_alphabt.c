#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		else
			continue;
	}
	putchar('\n');

	return (0);
}
