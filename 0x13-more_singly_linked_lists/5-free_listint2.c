#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: start node.
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *c;

	if (*head != NULL)
	{
		c = *head;
		while((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}
