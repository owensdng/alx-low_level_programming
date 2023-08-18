#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value of the new element.
 * Return: The address of the new element, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current_head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	current_head = *head;

	if (current_head != NULL)
	{
		while (current_head->prev != NULL)
			current_head = current_head->prev;
	}

	new->next = current_head;

	if (current_head != NULL)
		current_head->prev = new;

	*head = new;

	return (new);
}
