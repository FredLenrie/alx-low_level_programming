#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Bytes accepted
 * Return: Return pointer to first occurence of byte
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *f;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				f = &s[i];
				return (f);
			}
			j++;
		}
		i++;
	}
	return (0);
}
