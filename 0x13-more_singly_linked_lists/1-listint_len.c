#include "lists.h"

/**
 * listint_len - returns the number of element
 * in a linked list
 *
 * @h: pointer to the head node
 *
 * Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

