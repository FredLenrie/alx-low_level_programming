#include "main.h"

/**
  * infinite_add - function to adds tw integers stored as strings
  * @n1: first integer string to add
  * @n2: second integer string to add
  * @r: store result
  * @size_r: size of array r
  * Return: the summed string in r or 0
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, index1 = 0, index2;
	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[index1] = *s2 - '0' + *s1 + carry;
		carry = 0;
		if (r[index1] > '9')
		{
			carry++;
			r[index1] -= 10;
		}
		index1++;
		s2--;
		s1--;
		if (size_r == index1 && (s1 != n1 - 1 || s2 != n2 - 1 || carry == 1))
			return (0);
	}
	while (s1 != n1 - 1)
	{
		r[index1] = *s1 + carry;
		carry = 0;
		if (r[index1] > '9')
		{
			carry = 1;
			r[index1] -= 10;
		}
		s1--;
		index1++;
		if (size_r == index1 && (s1 != n1 - 1 ||  carry == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[index1] = *s2 + carry;
		carry = 0;
		if (r[index1] > '9')
		{
			carry = 1;
			r[index1] -= 10;
		}
		s2--;
		index1++;
		if (size_r == index1 && (s2 != n2 - 1 || carry == 1))
			return (0);
	}
	if (carry == 1)
	{
		r[index1] = '1';
		r[index1 + 1] = 0;
	}
	else
	{
		r[index1--] = 0;
	}
	index2 = 0;
	while (index2 <= index1)
	{
		carry = r[index1];
		r[index1] = r[index2];
		r[index2] = carry;
		index1--;
		index2++;
	}
	return (r);
}
