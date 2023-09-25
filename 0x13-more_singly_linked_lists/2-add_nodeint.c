#include "lists.h"

/**
 * add_nodeint - function that adds a pointer node at the beginning of a list
 * @head: start point to the list
 * @n: the integer for the pointer node
 *
 * Return: Address of element or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointer;

	pointer = malloc(sizeof(listint_t));
	if (pointer == NULL)
		return (NULL);

	pointer->n = n;
	pointer->next = *head;

	*head = pointer;

	return (pointer);
}
