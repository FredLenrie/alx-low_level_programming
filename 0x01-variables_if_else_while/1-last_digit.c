#include <stdlib.h>
#include <time.h>
/**
  * main - This program will assign a random number to the variable
  * Return: 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
