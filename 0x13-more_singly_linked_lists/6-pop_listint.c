#include "lists.h"

/**
 * pop_listint - the head node of a linked list will be deleted
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted in the linked list,
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
