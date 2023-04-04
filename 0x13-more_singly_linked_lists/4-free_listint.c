#include "lists.h"

/**
  * free_listint - frees a list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		current = head->next;

		free(head);
		head = current;
	}
}
