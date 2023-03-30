#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string;
	list_t *node;
	list_t *x = *head;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	string = strdup(str);
	node->str = string;
	if (!(node->str))
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(string);
	if (x == NULL)
	{
		*head = node;
	}
	else
	{
		while (x->next)
			x = x->next;
		x->next = node;
	}
	node->next = NULL;
	return (node);
}
