#include <stdio.h>
/**
 * main - function initialization
 * Description: print from a - z excluding q and e
 * Return: 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'q' || alp == 'e')
		{
			alp++;
		}
		else
		{
			putchar(alp);
			alp++;
		}
	}
	putchar('\n');

	return 0;
}
