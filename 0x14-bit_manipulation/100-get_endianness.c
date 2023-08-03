#include "main.h"

/**
 * get_endianness - Checks if a machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1; /* A number with the least significant bit set to 1. */
	char *ptr = (char *)&num; /* Pointer to the least significant byte of num. */

	/*
	 * If the value of the byte pointed to by ptr is 1
	 * it means the machine is little endian.
	 * If the value is 0, it means the machine is big endian.
	 */
	return (*ptr);
}
