#include "main.h"

/**
 * set_bit - updates a specific bit at a given index to 1
 * @n: pointer to the number to be modified
 * @index: index of the bit to be set to 1
 *
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
