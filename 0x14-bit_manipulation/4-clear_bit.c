#include "main.h"

/**
 * clear_bit - the value of a given bit is set to 0
 * @n: pointer to the number to be change
 * @index: the bit index to clear
 *
 * Return: -1 for failure and 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
