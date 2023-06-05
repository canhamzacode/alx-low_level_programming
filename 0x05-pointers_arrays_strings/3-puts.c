#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout
 * @str: the parameter
 * Return: none since void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		++str;
	}
	putchar('\n');
}
