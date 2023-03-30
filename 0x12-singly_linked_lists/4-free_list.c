#include "lists.h"

/**
  * free_list - A function that frees a list_t list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		head = head->next;
	}
	free(head);
}
