#include <stdio.h>
/**
 * main - starting point
 * Description: to print a-z in reverse
 * Return: 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
