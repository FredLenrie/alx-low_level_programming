#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function to generate random password
 * Return: the generated password
 */

int main(void)
{
char c;
int i;

srand(time(0));
while (i <= 2645)
{
c = rand() % 128;
i += c;
putchar(c);
}
putchar(2772 - c);
return (0);
}
