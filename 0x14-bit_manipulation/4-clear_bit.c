#include "main.h"

/**
 * clear_bit_value - updates a specific bit to 0 at the provided index
 * @n: pointer to the number to be modified
 * @index: index of the bit to be cleared
 *
 * Return: 1 if the operation was successful, -1 if it failed
 */
int clear_bit_value(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
