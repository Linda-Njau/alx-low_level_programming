#include "search_algos.h"
/**
 * exponential_search - finds value using the exponential search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value being searched
 * Return: value index or -1 error
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, i = 0, j = 0, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	i = bound / 2;
	j = fmin(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (mid = i; mid < j; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		if (array[i] == value)
			return (i);
		if (array[j] == value)
			return (j);
		mid = (i + j) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] == value)
			j = mid - 1;
		else
			i = mid + 1;
	}
	return (-1);
}
