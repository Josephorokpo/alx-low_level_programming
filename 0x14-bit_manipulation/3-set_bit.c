#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL; /* Initialize mask with 1 */

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index; /* Shift mask to the appropriate bit position */
	*n |= mask;

	return (1);
}
