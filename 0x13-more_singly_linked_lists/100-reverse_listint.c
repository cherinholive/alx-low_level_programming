#include "lists."

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: start node
 * Return: a pointer to the first node of
 * the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *per;
	
	per = NULL;
	curr = *head;

	while (1)
	{
		cur->next = per;
		per = cur;

		if (cur->next == NULL)
			break;
		cur = cur->next;
	}

	return (cur);
}
