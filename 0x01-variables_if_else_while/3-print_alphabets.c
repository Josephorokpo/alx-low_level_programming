#include <stdio.h>

/**
 * main - Entry point
 *
 * The program prints out the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 97;
    	int i = 0;
    	int u = 65;

    	for (l = 97; i < 26; l++)
	{
        	putchar(l);
        	i++;
    	}
    	i = 0; /* Reset i back to 0 for the second loop */
    	for (u = 65; i < 26; u++)
    	{
        	putchar(u);
        	i++;
       	}
   	putchar('\n');
   	return (0);
}
