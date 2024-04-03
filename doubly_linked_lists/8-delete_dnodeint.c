#include "lists.h"
/**
 * delete_dnodeint_at_index - fct which delete a node at a specific index
 * @head: list of nodes
 * @index: index of the node we have to delete
 * Return: 1 for successful deletion
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	} else
		temp->prev->next = NULL;

	free(temp);
return (1);
}
