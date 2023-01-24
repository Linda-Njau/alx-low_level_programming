#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning
 * @head: head node
 * @n: int to be added
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new-> = n;
	new->next = *head;
	new->prev = NULL;
	if (*head !=NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
