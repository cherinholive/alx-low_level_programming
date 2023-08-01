#include "main.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * @head: start of linked list.
 * @str: char to add
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	else
		*head = new;

	return (*head);
}
