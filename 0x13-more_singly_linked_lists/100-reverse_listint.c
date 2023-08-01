#include "lists."

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: start node
 * Return: a pointer to the first node of
 * the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex;
	listint_t *per;

	per = NULL;
	nex = NULL;

	while (*head != NULL)
	{
		nex = *head->next;
		head->next = per;
		per = *head;
		*head = nex;
	}

	*head = per;
	return (*head);
}
