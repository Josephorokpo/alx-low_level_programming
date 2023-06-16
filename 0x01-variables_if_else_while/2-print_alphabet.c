#include <stdio.h>

/**
 * main - Entry point
 *
 * The program prints out the alpherbet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int i = 0;

	for (n = 97; i < 26; n++)
	{
		putchar(n);
		i++;
	}
	putchar('\n');
	return (0);
}
