#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int print_flag = 0;

	while (mask != 0)
	{
		if (n & mask)
		{
			_putchar('1');
			print_flag = 1;
		}
		else if (print_flag)
			_putchar('0');

		mask >>= 1;
	}

	if (!print_flag)
		_putchar('0');
}

