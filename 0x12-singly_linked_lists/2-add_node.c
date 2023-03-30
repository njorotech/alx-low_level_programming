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
	list_t *new;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
