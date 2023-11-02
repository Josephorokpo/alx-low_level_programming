#include "hash_table.h"

/**
 * hash_djb2 - Implement the djb2 hash algorithm.
 * @str: The string to be hashed.
 *
 * Return: The hash value generated for the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
