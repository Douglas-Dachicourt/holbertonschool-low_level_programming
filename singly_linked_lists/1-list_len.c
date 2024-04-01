#include "lists.h"
/**
 * list_len - fct which count number of elem in a list
 * @h: list of elements
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			count++;
		}
	h = h->next;
	}
	return (count);
}
