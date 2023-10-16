#include <stdio.h>

/**
 * add - Add two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of a minus b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divide two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of the division, or 0 if there's a division by zero
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Compute the modulo of two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of the modulo operation, or 0 if there's a modulo by zero
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
