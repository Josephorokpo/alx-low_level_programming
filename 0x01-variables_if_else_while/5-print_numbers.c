#include <stdio.h>

/**
 * main – Entry point
 *
 * Description: Prints numbers from 0 to 9, followed by a new line.
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
