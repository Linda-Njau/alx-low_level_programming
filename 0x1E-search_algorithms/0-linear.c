#include "search_algos.h"
/**
* linear_search - searches for a value in an array
* @array: pointet to first element
* @size: number of elements in array
* @value: value to search for
*Return: index of value or -1 if NULL
*/

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;
    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
}

