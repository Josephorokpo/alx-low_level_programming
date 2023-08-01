#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of listint_t linked list.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted (index starts at 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *prev = NULL;
	listint_t *current = *head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		i++;
	}

	return (-1);
}
