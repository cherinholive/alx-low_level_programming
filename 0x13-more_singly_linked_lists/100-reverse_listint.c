#include "lists."

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: start node
 * Return: a pointer to the first node of
 * the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_;
	listint_t *per;

	per = NULL;
	next_ = NULL;

	while (*head != NULL)
	{
		next_ = *head->next;
		head->next = per;
		per = *head;
		*head = next_;
	}

	return (*head);
}
