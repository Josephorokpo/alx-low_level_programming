#include "main.h"

/**
 * print_binary_representation - Prints the binary representation
 * of a decimal number.
 * @decimal_num: The decimal number to be represented in binary.
 */
void print_binary_representation(unsigned long int decimal_num)
{
	/* Initialize variables */
	int i, count = 0;
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
