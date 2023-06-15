#include "lists.h"

/**
 * add_dnodeint - Add new node at the beginning
 * @head: list head
 *  @n: Data value of the new node
 *
 *  Return: Address of the new element
 *  or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = (*head);

	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}

	(*head) = newnode;

	return (newnode);
}
