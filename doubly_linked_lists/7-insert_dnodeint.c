#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	dlistint_t *position = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->prev = NULL;

	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
	*h = new_node;

	return (new_node);
	}

	for (i = 0; i < idx - 1 && position != NULL; i++)
	{
		position = position->next;
	}

	if (position == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = position->next;

	if (position->next != NULL)
        position->next->prev = new_node;

    position->next = new_node;

    new_node->prev = position;

	return (new_node);
}
