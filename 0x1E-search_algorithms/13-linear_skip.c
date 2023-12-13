#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list using Linear search algorithm
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not present or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (list == NULL)
        return NULL;

    skiplist_t *express = list;

    while (express && express->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->express->index, express->express->n);
        if (express->express->n >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", express->index, express->express->index);

            while (list && list->index <= express->express->index)
            {
                printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
                if (list->n == value)
                    return list;
                list = list->next;
            }
        }
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", express->index, express->express->index);
    
    while (list && list->index <= express->express->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return list;
        list = list->next;
    }

    return NULL;
}
