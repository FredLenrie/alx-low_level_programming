#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: head of the list
 * Return: number of count
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
