#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char la = 'a';

	while (la <= 'z')
	{
		_putchar(la);
		la++;
	}

	_putchar('\n');
}
