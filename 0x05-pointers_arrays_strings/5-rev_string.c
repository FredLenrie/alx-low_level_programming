#include "main.h"
/**
  * rev_string - function that reverses a string.
  * @s: String to reverse
  * Return: Nothing
  */
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
  * _strlen - function to return the length of a string
  * @s: string
  * Return: returns lenght;
  */
int _strlen(char *s)
{
	int count, i;

	i = 0;
	for (count = 0; s[count] != '\0'; count++)
		i++;

	return (i);
}

/**
  * swap_char - function that swaps two characters
  * @a: first character
  * @b: second character
  * Return: nothing
  */

void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
