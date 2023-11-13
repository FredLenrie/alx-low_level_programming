#include "main.h"

/**
  * _strchr - function that locates a character in a string
  * @s: string targeted
  * @c: character targeted
  * Return: returns pointer to first occcurence of c
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
