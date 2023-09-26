#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

    if (h == NULL)
        return (0);

    while (1)
    {
        printf("%d\n", h->n);
        count++;
        if (h->next == NULL)
            break;
        h = h->next;
    }

    return (count);
}
