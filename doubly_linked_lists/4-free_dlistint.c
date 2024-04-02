#include "lists.h"
/**
 * free_dlistint - fct that frees a dble linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;

		free(temp);
	}

}
