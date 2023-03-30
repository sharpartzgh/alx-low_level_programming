#include "lists.h"

/**
 * add_node - adds a new node at the beginnning of a list
 *
 * @head: head
 * @str: string
 *
 * Return: the address of the new element, else
 * NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *string;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	string = strdup(str);
	node->str = string;
	if (!(node->str))
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = *head;
	*head = node;

	return (node);
}
