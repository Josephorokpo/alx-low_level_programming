#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list
 *  at a certain index.
 * @head: Pointer to the pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *prev, *node_to_delete;
	unsigned int i = 1;

	prev = *head;
	node_to_delete = (*head)->next;

	while (i < index && node_to_delete)
	{
		prev = node_to_delete;
		node_to_delete = node_to_delete->next;
		i++;
	}

	if (!node_to_delete)
		return (-1);

	prev->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
