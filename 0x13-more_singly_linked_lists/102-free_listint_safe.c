#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Double pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h, *next_node;

	while (current)
	{
		next_node = current->next;

		/* Check for a loop */
		if (current <= next_node)
		{
			*h = NULL;
			free(next_node);
			break;
		}

		free(current);
		current = next_node;
		size++;
	}

	return (size);
}
