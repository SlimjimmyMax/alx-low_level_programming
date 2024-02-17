#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in @array
 * @value: the value to search for
 *
 * Return: the first index where @value is located, or -1 if @value
 * is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
    /* Check if array is NULL */
    if (array == NULL)
        return (-1);

    /* Iterate through the array */
    for (size_t i = 0; i < size; i++)
    {
        /* Print the value being checked */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        /* Check if the value is found */
        if (array[i] == value)
            return (i);
    }

    /* If value is not found, return -1 */
    return (-1);
}
