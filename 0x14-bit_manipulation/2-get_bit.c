#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specific index in a decimal number
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index. Returns -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
