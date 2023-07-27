#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
