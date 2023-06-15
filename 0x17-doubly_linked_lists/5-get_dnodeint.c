#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: list head
 * @index: index of node to be returned
 *
 * Return: the nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
