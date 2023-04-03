#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a list
  * @head: pointer to the first node
  *
  * Return: sum of all the data (n) of a listint_t linked list or
  * 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		sum += head->n;
		return (sum);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
