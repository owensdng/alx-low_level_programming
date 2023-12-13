#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for value sorted array using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    if (array[0] == value)
        return 0;

    size_t i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    size_t low = i / 2;
    size_t high = (i < size - 1) ? i : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (size_t j = low; j <= high; ++j)
        {
            if (j == high)
                printf("%d\n", array[j]);
            else
                printf("%d, ", array[j]);
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
