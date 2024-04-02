#include "lists.h"
/**
 * free_list - fct that frees a linked list
 * @head: head node list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;

		free(temp->str);
		free(temp);
	}

}
