#include "main.h"

/**
 * *print_alphabet_x10 - print alphabet a - z ten times
 *
 */

void print_alphabet_x10(void)

{
	int g;
	char h;

	for (g = 0; g < 10; g++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}

		_putchar('\n');
	}
}
