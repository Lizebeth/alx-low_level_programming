#include "main.h"

/**
 * print diagonal - printing line
 * @n: integer params
 */

void print_diagonal(int n);
{
	int x, i;

	if  (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			putchar(' ');
			putchar(92);
		_putchar('\n');
	}
}
