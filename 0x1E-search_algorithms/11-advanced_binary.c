#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using Advanced binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0, right = size - 1;
    int result = -1;

    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; ++i)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        if (array[mid] == value)
        {
            result = mid;
            right = mid - 1;  // Move left to find the first occurrence
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return result;
}
