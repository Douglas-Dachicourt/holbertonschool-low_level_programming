#include "lists.h"
/**
 * free_list - fct that frees a linked list
 * @head: head node
 */
void free_list(list_t *head)
{
	head = malloc(sizeof(list_t));

	if (head != NULL)
	{
		free(head);
	}

}
