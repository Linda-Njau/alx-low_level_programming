#include "lists.h"
/**
 * list_len - returns number elements in a linked list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *nodeptr = NULL;

	nodeptr = malloc(sizeof(list_t));

	nodeptr = h;
	while (nodeptr != NULL)
	{
		count++;
		nodeptr = nodeptr->next;
	}
	return (count);
}
