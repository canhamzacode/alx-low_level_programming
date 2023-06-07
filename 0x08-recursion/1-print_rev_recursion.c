#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: param 1
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
