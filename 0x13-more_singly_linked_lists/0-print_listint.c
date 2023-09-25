#include "lists.h"

/**
 * print_listint - all the elements of a linked list are printed
 * @h: linked list of type listint_t to print
 *
 * Return: the nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}


