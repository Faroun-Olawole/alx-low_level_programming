#include "lists.h"

/**
 * get_nodeint_at_index - node should return at a certain index
 * @head: the linked list first node
 * @index: index for the node to return
 *
 * Return: pointer to the node the code is looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
