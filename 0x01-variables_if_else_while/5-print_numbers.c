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
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
