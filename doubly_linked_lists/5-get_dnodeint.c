#include "lists.h"
/**
 * get_dnodeint_at_index - fct that find a nth node in a dbl linked list
 * @head: head of node list
 * @index: the index we want to find
 * Return: the node value finded
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;

		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
