#include "main.h"

/**
 * get_endianness - to check for a machine that is small or big
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
