#include <stdio.h>
/**
 * main - starting point
 * Description: a function that prints using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
