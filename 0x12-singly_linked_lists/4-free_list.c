#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: list_t list to be freed.
 *
 * Description: This function deallocates memory used by each node in the
 *	linked list pointed to by 'head'. It frees the strings
 *	and nodes of the list. The 'head' pointer is set to NULL
 *	after all memory has been freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
