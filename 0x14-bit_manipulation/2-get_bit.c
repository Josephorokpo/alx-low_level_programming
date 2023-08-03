#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at index `index`, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL; /* Initialize mask with 1 */
	int bit_value = -1; /* Initialize bit_value with -1 */

	if (index < sizeof(unsigned long int) * 8)
	{
		mask <<= index;	/* Shift mask to the appropriate bit position */
		bit_value = (n & mask) ? 1 : 0;	/* Retrieve the bit value */
	}

	return (bit_value);
}
