#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: pointer to the first node
  *
  * Return: head node's data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);


}
