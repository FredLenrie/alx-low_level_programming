#include "main.h"
/**
  * _strdup - function that returns a pointer to a
  * newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: string to be copied
  * Return: NULL in case of error, pointer to allocated space
  */

char *_strdup(char *str)
{
	char *cpy;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;
	cpy = malloc(sizeof(char) * (j + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[j] = '\0';

	return (cpy);
}
