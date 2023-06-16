#include <stdio.h>

/**
 * Main - Entry point
 *
 * Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, u, i;

	for (n = 48; n < 58; n++)
	{
		for (u = 49; u < 58; u++)
		{
			for (i = 50; i < 58; i++)
			{
				if (i > u && u > n)
				{
					putchar(n);
					putchar(u);
					putchar(i);
					if (n != 55 || u != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
