#include "main.h"
/**
 * print_alphabet - print alphabet in lower case
 * main: starting point
 * Description: using only putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
