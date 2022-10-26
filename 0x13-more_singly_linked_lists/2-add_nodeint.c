#include "lists.h"
/**
 * *add_nodeint - adds node at beginning.
 * @head: pointer to first node.
 * @n: node to be added.
 * Return: new elementor NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeptr = NULL;

	nodeptr = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (nodeptr == NULL)
		return (NULL);

	nodeptr->n = n;
	nodeptr->next = NULL;
	nodeptr->next = *head;
	*head = nodeptr;

	return (nodeptr);
}




