#include "lists.h"
/**
 * print_list - prints linked list
 * @h: pointer to first node
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *nodeptr = NULL;

	nodeptr = malloc(sizeof(list_t));
	if (nodeptr == NULL)
		return (0);
	nodeptr = h;
	while (nodeptr != NULL)
	{
		if (nodeptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", nodeptr->len, nodeptr->str);
		nodeptr = nodeptr->next;
		count += 1;
	}
	return (count);
}
