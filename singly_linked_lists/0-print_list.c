#include "lists.h"

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	printf("[%d] %s\n",h -> len, h -> str);
    return (1 + print_list(h -> next));
}
