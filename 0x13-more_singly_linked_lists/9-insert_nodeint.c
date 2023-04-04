#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node at a given position
  * @head: pointer to the first node
  * @idx: index of the list where the new node should be added. starts at 0
  * @n: value of the new node
  *
  * Return: Address of the new node or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
