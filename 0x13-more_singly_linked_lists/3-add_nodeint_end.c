#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: start point to the list
 * @n: the integer for the pointer node
 * Return: Address of element or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pointer;
	listint_t *tmp = *head;

	pointer = malloc(sizeof(listint_t));
	if (pointer != NULL)
	{
		pointer->n = n;
		pointer->next = NULL;
	}
	else
		return (NULL);
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = pointer;
	}
	else
		*head = pointer;
	return (pointer);
}
