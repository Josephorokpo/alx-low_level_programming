#include "main.h"

/**
 * get_endianness - determines the endianness of the machine
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int test_value = 1;
	char *byte_representation = (char *)&test_value;

	return (*byte_representation);
}
