# include "lists.h"

/**
  * add_nodeint_end - Adds a new node at the end of a list
  * @head: pointer to the first node
  * @n: node to be added
  *
  * Return: Address of the new element or
  * NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
