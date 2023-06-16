#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints numbers between 0 to 9 and alphabets between a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
