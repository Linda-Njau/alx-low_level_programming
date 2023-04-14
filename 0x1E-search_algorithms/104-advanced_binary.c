#include "search_algos.h"
/**
 * advanced_binary - modifies binary search to find first occurence of value
 * @array: pointer to array
 * @size: size of arrays
 * @value: value to be found
 * Return: index of firsat occurence or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, half;
	int index;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");
	half = (size - 1) / 2;
	if (array[half] == value)
	{
		if (half == 0 || array[half - 1] < value)
			return ((int)half);
	}
	if (array[half] < value)
	{
		index = advanced_binary(array + half + 1, size - half - 1, value);
		if (index == -1)
			return (-1);
		return ((int)half + index + 1);
	}
	return (advanced_binary(array, half + 1, value));
}
