#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: list head
 * @index: index of the node to be deleted
 *
 * Return: 1 if succussful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	return (1);


}
