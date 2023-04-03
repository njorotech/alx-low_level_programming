#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: pointer to the first node
  *
  * Return: number of elements in a list
  */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
