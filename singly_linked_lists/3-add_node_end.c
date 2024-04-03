#include "lists.h"
/**
 * add_node_end - fct which add a node on the end ot he lkded list
 * @head: head node of list
 * @str: string to copy
 * Return: new_node is the adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		i++;
		length++;
	}
		new_node->str = strdup(str);
		new_node->len = length;
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
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
	last->next = new_node;
	}

	return (new_node);
}
