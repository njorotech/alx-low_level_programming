#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head pointer of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeQty = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodeQty++;
	}
	return (nodeQty);
}
