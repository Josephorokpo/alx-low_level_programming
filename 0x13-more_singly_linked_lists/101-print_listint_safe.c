#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints listint_t linked list, avoids infinite loops.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num_nodes++;

		if (current <= current->next)
		{
			/* Print the node that causes the cycle */
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		/* Mark the current node as visited by making it point back to itself */
		temp = current;
		current = current->next;
		temp->next = (void *)temp;
	}

	return (num_nodes);
}
