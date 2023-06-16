#include <stdio.h>

/**
 * main – Entry point
 *
 * Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		printf("%d", k);
	}
	putchar('\n');
	return (0);
}
