#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted number or 0 on error.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_value = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);

		decimal_value = (decimal_value << 1) | (b[index] - '0');
	}

	return (decimal_value);
}
