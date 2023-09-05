#include "main.h"

/**
  * create_array - function that creates an array of chars
  * and initializes it with a specific char
  * @size: size of the array
  * @c: function parameter
  * Return: NULL if size = 0 or a pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
