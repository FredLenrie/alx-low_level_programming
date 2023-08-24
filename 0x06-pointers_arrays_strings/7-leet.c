#include "main.h"
/**
  * leet - function that encodes a string to 1337
  * @s: string to be encoded
  * Return: encoded string
  */

char *leet(char *s)
{
int i, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (s[i] == let[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}
	return (s);
}
