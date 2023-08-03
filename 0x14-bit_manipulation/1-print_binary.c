#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number.
 * @n: The decimal number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 0;

	mask = ~mask >> 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; mask > 0; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
