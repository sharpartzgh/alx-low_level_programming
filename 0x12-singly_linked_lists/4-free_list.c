#include "lists.h"

/**
 * free_list - fress a list
 *
 * @head: head
 *
 */
void free_list(list_t *head)
{
	list_t *x = head;
	list_t *next;

	while (x)
	{
		next = x->next;
		free(x->str);
		free(x);
		x = next;
	}
	head = NULL;
}
