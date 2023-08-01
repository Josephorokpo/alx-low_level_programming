#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at certain index.
 * @head: Pointer to the pointer of the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	return (-1);

	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			if (prev == NULL)
			{
			*head = current->next;
			free(current);
			}
			else
			{
			prev->next = current->next;
			free(current);
			}
			return (1);
		}

	prev = current;
	current = current->next;
	i++;
	}

	return (-1);
}
