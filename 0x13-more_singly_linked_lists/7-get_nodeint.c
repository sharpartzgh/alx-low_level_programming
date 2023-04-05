#include "lists.h"

/**
 * get_nodeint_at_index - produces the nth node
 * @head: head node's pointer
 * @index: element's index to be produced
 * Return: pointer to the nth node,
 * NULL if the element does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
