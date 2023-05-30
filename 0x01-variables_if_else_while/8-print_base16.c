#include <stdio.h>
/**
 * main - function initialized
 * Description: function to print numbers in base 16
 * Return: 0
 */
int main(void)
{
	int i = 0;

	char alp = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
