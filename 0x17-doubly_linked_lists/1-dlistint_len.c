#include "lists.h"

/**
 * dlistint_len - return number of elements in a list
 * @h: list head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem_num = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		elem_num++;
		current = current->next;
	}
	return (elem_num);
}
