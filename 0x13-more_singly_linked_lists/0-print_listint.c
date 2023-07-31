include "lists.h"

/**
 * print_listint - Prints all elements of the linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements printed.
 */
size_t print_listint(const struct listint_t *h)
{
	size_t count = 0;
	const struct listint_t *current = h;

	while (current != NULL)
	{
		printf("%d ", current->data);
		count++;
		current = current->next;
	}

	return (count);
}
