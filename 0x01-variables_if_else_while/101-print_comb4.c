#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int c, d, e;

	for (c = 0; c <= 7; c++)
	{
		for (d = c + 1; d <= 8; d++)
		{
			for (e = d + 1; e <= 9; e++)
			{
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');
				putchar((e % 10) + '0');
				if (c == 7 && d == 8 && e == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
