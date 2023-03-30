#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list_t list
  * @head: pointer to first node
  * @str: string to be added
  *
  * Return: Address of the new element or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newEnd = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}

	if (newEnd == NULL)
	{
		return (NULL);
	}

	newEnd->str = strdup(str);
	newEnd->len = strlen(newEnd->str);
	newEnd->next = NULL;

	if (*head == NULL)
	{
		*head = newEnd;
		return (newEnd);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newEnd;

	return (newEnd);


}
