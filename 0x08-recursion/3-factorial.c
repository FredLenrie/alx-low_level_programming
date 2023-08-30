#include "main.h"

/**
  * factorial - function that returns the factorial of a given number
  * @n: the number to find the factorial of
  * Return: the factorial of the number
  */

int factorial(int n)
{
	int i;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	i = factorial(n - 1);
	return (n * i);
}
