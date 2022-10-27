#include "lists.h"
/**
 * *add_nodeint_end - add node at end
 * @head: pointer to first node
 * @n: data to be added
 * Return: address of the new element of NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeptr = NULL;
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	nodeptr = *head;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (nodeptr != NULL)
		nodeptr = nodeptr->next;
	nodeptr->next = temp;
	return (temp);
}
