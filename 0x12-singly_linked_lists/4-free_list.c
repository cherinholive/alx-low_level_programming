#include "lists.h"

/**
 * free_list - that frees a list_t list.
 * @head: head or start node.
 * Ruturn: none
 */

void free_list(list_t *head)
{
	list_t *item;

	while (head != NULL)
	{
		item  = head;
		head = head->next;
		free(item->str);
		free(item->len);
		free(item);
	}
}
