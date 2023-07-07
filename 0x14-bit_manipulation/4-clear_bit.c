#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
