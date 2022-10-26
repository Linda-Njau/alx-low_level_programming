#include "lists.h"
/**
 *print_listint - prints all elements of a list
 *@h: pointer to the firsy node.
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	ptr = h;
	if (h == NULL)
		return (0);
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		printf("%u\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}