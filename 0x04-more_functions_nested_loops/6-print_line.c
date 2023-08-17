#include "main.h"

/**
  * print_line - function that draws a straight line in the terminal
  * @n: function parameter
  * Return: void
  */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
