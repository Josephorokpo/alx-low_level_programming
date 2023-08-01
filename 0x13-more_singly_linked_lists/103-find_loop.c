#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (hare);
		}
	}

	return (NULL);
}
