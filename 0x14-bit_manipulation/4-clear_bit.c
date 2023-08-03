#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL; /* Initialize mask with 1 */

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index; /* Shift mask to the appropriate bit position */
	mask = ~mask; /* Flip all bits in the mask to set the target bit to 0 */
	*n &= mask; /* Clear the bit at the index by performing bitwise AND */

	return (1);
}
