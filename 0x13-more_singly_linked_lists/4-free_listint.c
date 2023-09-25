#include "lists.h"

/**
 * free_listint - linked list are freed
 * @head: the listint_t list that will be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
