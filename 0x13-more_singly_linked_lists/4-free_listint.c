#include "lists.h"

/**
  * free_listint - frees a list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
