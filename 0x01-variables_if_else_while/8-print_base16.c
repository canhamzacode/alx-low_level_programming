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

	for (i; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (alp; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
