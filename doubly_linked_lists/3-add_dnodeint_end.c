#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc (sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
}
