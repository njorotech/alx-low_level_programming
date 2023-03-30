#include "lists.h"

/**
  * list_len - Returns number of elements in a linked list_t list.
  * @h: pointer to the first node
  *
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
