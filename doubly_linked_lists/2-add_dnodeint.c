#include "lists.h"
/**
 * add_dnodeint - fct which add a node to a double linked list
 * @head: start of the list
 * @n: int to print out
 * Return: return the adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
*head = new_node;

	return (new_node);
}
