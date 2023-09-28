#include "main.h"

/**
 * set_bit - a bit is set at a given index to 1
 * @n: pointer of the number to be change
 * @index: the bit index set to 1
 *
 * Return: -1 for failure and 1 for success,
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
