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
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		num_nodes++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			/* Cycle detected, print the node that causes the cycle */
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}

	return num_nodes;
}
