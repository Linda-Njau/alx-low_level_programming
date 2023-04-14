#include "search_algos.h"
/**
 * jump_list - function to search for value in linked list using jump search algorithm
 * @list: pointer to head node
 * @size: size of linked list
 * @value: value to be found
 * Return: index of vlue or -1 on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *block;
	size_t step, prev;

	if (list == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	block = list;
	while (block->next != NULL && block->n < value)
	{
		prev = block->index;
		block = block->next;
		while(block->index < step && block->n < value)
		{
			printf("Value checked at index [%lu] = [%d]\n", block->index, block->n);
			block->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", block->index, block->n);
		if (block->index == 0 || block->n >= value)
			break
		step += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, block->index);
	while (prev < size && prev <= block->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
               prev, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
		prev++;
	}
	return (NULL);
}
