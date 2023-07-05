#include "main.h"

/**
 * _pow_recursion - returns the value of i raised to the power of j
 * @i: value to raise
 * @j: power
 *
 * Return: result of the power
 */
int _pow_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	return (i * _pow_recursion(i, j - 1));
}
