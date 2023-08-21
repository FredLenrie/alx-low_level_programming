#include "main.h"
/**
  * puts_half - Function to print half of a string
  * @str: string
  * Return:void
  */
void puts_half(char *str)
{
	int i = _strlen(str);

	if (i % 2 == 0)
		i = i / 2;

	else
		i = (i + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


/**
  * _strlen - returns the length of a string
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
