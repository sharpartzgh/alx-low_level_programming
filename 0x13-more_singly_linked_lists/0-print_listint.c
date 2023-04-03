#include "lists.h"

/**
 * print_listint - print all the elements of a list
 *
 * @h: pointer to the head node
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\\n", temp->n);
		temp = temp->next;
		count++;

	}

	return (count);

}

