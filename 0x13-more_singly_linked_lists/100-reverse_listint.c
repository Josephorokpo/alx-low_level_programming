#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in-place.
 * @head: Pointer to the first node of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		/* Store the next node in the original list. */
		next = (*head)->next;

		/* Point the current node to the previous node. */
		(*head)->next = prev;

		/* Move 'prev' and 'head' pointers one step ahead. */
		prev = *head;
		*head = next;
	}

	/* Update the head pointer to the new first node of the reversed list. */
	*head = prev;

	return (*head);
}
