#include "lists.h"
/**
 * print_dlistint - prints all elements
 * @h: const head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
