#include "lists.h"
/**
 * add_dnodeint_end - fct which add new node at the end of a dble linked list
 * @head: head node
 * @n: value of the elem added
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node;
	}

	return (new_node);

}