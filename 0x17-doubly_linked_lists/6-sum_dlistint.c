#include "lists.h"

/**
 * sum_dlistint - sums up all the data in a list
 * @head: list head
 *
 * Return: The sum, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
