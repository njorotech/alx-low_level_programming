#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
		*head = NULL;
	}
	/*head = NULL;*/
}
