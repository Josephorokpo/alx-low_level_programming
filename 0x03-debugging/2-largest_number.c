#include "main.h"

/**
 * largest_number - Returns the largest of three integers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 *
 * Return: The largest of the three integers
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}
	else if (c > largest)
	{
		largest = c;
	}
	return (largest);
}
