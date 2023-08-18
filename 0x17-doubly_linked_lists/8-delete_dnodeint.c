#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of
 * a dlistint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	if (temp != NULL)
		temp->prev = current;
	free(current->next);
	current->next = temp;

	return (1);
}
