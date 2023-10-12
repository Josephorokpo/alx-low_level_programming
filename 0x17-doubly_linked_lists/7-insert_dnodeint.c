#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index at which to insert the new node.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (temp != NULL)
			temp->prev = new_node;
		new_node->next = temp;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}

	free(new_node); /* Failed to insert at the specified index */
	return (NULL);
}
