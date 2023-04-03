#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: pointer to the first node
  *
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	free(*head);
}
