#include "lists.h"
/**
 * free_listint2 - free lists
 * @head: points to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nodeptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nodeptr = *head;
		*head = (*head)->next;
		free(nodeptr);
	}
	*head = NULL;
}
