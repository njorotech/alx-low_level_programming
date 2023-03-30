#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: pointer to the node
  * @str: string to be added
  *
  * Return: Address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
