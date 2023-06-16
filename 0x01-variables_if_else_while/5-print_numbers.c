#include <stdio.h>

/**
 * main – Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0, followed by a new line.
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
