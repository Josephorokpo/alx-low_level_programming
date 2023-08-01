#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, avoiding infinite loops.
 * @h: A pointer to the pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp_list = NULL;
	listint_t *current = *h;

	while (current)
	{
		if (current->next == temp_list)
		{
			free(current);
			break;
		}

		temp_list = current->next;
		free(current);
		current = temp_list;
		len++;
	}

	*h = NULL;

	return (len);
}
