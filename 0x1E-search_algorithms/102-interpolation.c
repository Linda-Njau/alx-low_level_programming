#include "search_algos.h"
/**
 * interpolation_search - finds value using interpolation search algorithm
 * @array: pointer to array being searched
 * @size: size of array
 * value: value to be found
 * Return: value or -1 at failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low =0;
	size_t high = size - 1;
	size_t  pos = 0;
	
	if (array == NULL || size == 0)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
