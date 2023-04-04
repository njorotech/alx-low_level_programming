#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index given
  * @head: pointer to the first node
  * @index: index of the node to be deleted
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		else
		{
			current = current->next;
		}
	}
	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}
