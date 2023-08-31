#include "main.h"

/**
 * flip_bits - determines the count of differing bits between two numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: count of differing bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int differing_bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = differing_bits >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
