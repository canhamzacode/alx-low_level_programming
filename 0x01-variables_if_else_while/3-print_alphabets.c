#include <stdio.h>
/**
 * main - starting point
 * Description: print a-z and A-Z then new line
 * Return: 0
 */
int main(void)
{
	char alps = 'a';

	char alpc = 'A';

	while (alps <= 'z')
	{
		putchar(alps);
		alps++;
	}
	while (alpc <= 'Z')
	{
		putchar(alpc);
		alpc++;
	}
	putchar('\n');

	return (0);
}
