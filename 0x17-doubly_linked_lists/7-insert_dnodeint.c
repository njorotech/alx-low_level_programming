#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: list head
 * @idx: node index
 * @n: new node data
 *
 * Return: address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (newnode == NULL || h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}

	while (current != NULL && i < idx)
	{
		i++;
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->prev = current->prev;
	newnode->next = current;
	current->prev = newnode;
	current = newnode->next;

	return (newnode);
}
