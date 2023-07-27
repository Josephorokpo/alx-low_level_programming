#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("'%s'", h->str);
		else
			printf("[0] (nil)");

		h = h->next;
		count++;

		if (h != NULL)
			printf(", ");
	}

	printf("]\n");
	return (count);
}
