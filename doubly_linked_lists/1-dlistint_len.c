#include "lists.h"
/**
 * dlistint_len - fct which return number of elem in a double linked list
 * @h: list of elem
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			count++;
		}
	h = h->next;
	}
	return (count);
}
