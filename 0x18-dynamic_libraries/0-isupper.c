#include "main.h"

/**
 * _isupper - Check uppercase letters
 * @c: is the char to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
