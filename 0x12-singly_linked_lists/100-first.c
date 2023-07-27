#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a sentence before the main
 *	function is executed.
 *
 * Description: This function is attributed with the constructor attribute,
 *	which means it will be executed before the main function.
 *	It prints two sentences to the standard output.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
