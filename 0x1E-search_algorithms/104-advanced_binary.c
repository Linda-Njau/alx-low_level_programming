#include "search_algos.h"
/**
 * advanced_binary - improvement on binary search to return first occurrence of value
 * @array: pointer to array
 * @size: size of array
 * @value: value of array
 * Return: index where the value is located or -1 if value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t half, i;
    int subarray_idx;
    int *original_array;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
        printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

    original_array = array;
    half = (size - 1) / 2;
    subarray_idx = array - original_array;

    if (array[half] == value)
    {
        if (half == 0 || array[half - 1] < value)
            return (subarray_idx + half);
        else
            return (advanced_binary(array, half + 1, value));
    }

    if (array[half] > value)
        return (advanced_binary(array, half, value));

    subarray_idx += half + 1;
    half = (size - half - 1) / 2;
    return (advanced_binary(array + half, size - half, value) + subarray_idx);
}

