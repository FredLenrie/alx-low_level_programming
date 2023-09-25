#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((head != NULL) && (i <= index))
	{
		x = head;
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);

	return (x);
}
