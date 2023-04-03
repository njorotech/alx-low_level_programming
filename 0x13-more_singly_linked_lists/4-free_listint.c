#include "lists.h"

/**
  * free_listint - frees a list
  * @head: pointer to the first node
  * 
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	free(head);
}
