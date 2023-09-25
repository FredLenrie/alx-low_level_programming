#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: the head of the list
 * Return: head node’s data (n) or if list is empty
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp = *head;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	pop = temp->n;
	free(temp);
	temp = NULL;

	return (pop);
}
