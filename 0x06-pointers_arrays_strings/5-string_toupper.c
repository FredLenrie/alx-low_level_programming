#include "main.h"

/**
  * string_toupper - function that changes all lowercase
  * letters of a string to uppercase.
  * @str: function parameter
  * Return: a character
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
