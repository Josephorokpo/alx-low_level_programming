#include "main.h"

/**
 * get_bit - retrieves the value of a specific bit at an
 * index within a decimal number.
 * @n: the decimal number to analyze.
 * @index: the index of the bit to retrieve.
 *
 * Return: the value of the targeted bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
