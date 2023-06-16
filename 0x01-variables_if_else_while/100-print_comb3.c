#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, m;

    for (n = 0; n <= 9; n++)
    {
        for (m = 0; m <= 9; m++)
        {
            if (n != m)
            {
                putchar(n + '0');
                putchar(m + '0');
		if (n == 57 && m == 57)
		{
			continue;
		}
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
