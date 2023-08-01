#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node in a linked list at a certain index.
 * @head: Pointer to the pointer of the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *node_to_delete;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

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
