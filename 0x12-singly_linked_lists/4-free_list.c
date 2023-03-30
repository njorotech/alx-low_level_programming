#include "lists.h"

/**
  * free_list - A function that frees a list_t list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
