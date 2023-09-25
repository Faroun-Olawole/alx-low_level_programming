#include "lists.h"

/**
 * add_nodeint - a new node is added at the beginning of the linked list
 * @head: pointer of the first node in the list
 * @n: data to be inserted in the new node
 *
 * Return: NULL if fails occurs or pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
