#include "search_algos.h"
/**
 * jump_search - finds value using jump search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to be found
 * Return: value or -1 on error
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i <= (right < size ? right : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
