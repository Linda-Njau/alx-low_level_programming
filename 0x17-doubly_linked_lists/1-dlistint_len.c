#include "lists.h"
/**
 * dlistint_len - return number of elements
 * @h: header of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	while(h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
