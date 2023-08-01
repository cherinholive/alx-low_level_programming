#include "lists.h"

/**
 * listint_len -  the number of elements in a
 * linked listint_t list.
 * @h: head or start node.
 *
 * Return: number element
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h->next != NULL)
	{
		h = h->next;
		i++
	}

	return (i);
}
