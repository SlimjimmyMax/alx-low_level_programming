#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - looks for an integer in an array
 * @array: array to be searched
 * @size: total elements in the array
 * @cmp: points to a function for comparing values
 *
 * This function searches for an integer in the given array by using the provided comparison function.
 * It returns the index of the first matching element upon success, or -1 if no match is found or if the input is invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int e_l;

    if (array && cmp)
    {
        if (size <= 0)
            return (-1);

        for (e_l = 0; e_l < size; e_l++)
        {
            if (cmp(array[e_l]) != 0)
                return (e_l);
        }
    }

    return (-1);
}
