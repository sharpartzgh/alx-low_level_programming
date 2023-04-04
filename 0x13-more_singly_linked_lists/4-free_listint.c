/**
 * free_listint - frees a list
 *
 * @head: pointer to the head node
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
