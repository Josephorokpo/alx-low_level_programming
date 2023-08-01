#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}