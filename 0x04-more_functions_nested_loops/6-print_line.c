#include "main.h"
/**
 * print_line - write a function that draws a staright line in the terminal.
 * @n: Integal amount of _
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
