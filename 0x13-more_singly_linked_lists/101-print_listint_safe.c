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

		temp = current->next;
		if (temp >= current)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}

		current = temp;
	}

	return (num_nodes);
}
