#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to head of list
 * @index: index of specified position
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current && (i <= index); i++)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
	return (-1);
}
