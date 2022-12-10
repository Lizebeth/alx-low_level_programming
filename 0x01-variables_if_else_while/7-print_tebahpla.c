#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit number of base 10
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

