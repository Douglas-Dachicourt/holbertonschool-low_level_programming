#include "lists.h"
/**
 * add_node - fct which add a node on the head ot he lkded list
 * @head: head node of list
 * @str: string to copy
 * Return: new_node the adress of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		i++;
		length++;
	}

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
