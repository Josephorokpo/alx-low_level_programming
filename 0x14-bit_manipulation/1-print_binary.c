#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @n: the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	/* Initialize variables */
	int i,
	count = 0;
	unsigned long int current;

	/* Iterate through the bits of the decimal number */
	for (i = 63; i >= 0; i--)
	{
		current = decimal_num >> i;

		/* Check if the current bit is 1 */
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		/* Check if printing has started */
		else if (count)
		{
			_putchar('0');
		}
	}

	/* If no bits were printed, print '0' */
	if (!count)
	{
		_putchar('0');
	}
}
