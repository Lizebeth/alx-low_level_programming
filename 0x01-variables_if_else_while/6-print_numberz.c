#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit number of base 10 from 0
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
