#include "main.h"
/**
 * print_alphabet_x10 - print a-z ten times
 * Description: After each there should be a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alp = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
	}
}
