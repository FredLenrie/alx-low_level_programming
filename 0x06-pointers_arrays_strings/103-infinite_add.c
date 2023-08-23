#include "main.h"

/**
  * *add_strings - function to add numbers stored in two strings.
  * @n1: String containing the first number.
  * @n2: String containing the second number
  * @r: Buffer to store the result.
  * @r_index: Current index of the buffer.
  * Return: If r can store the sum - a pointer to the result.
  *         If r cannot store the sum - 0.
  */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (*n1 && *n2; n1--; n2--; r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (*n1; n1--; r_index++)
	{
		num = *(n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (*n2; n2--;  r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	return (0);
}
