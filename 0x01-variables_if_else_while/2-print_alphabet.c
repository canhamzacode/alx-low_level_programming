#include <stdio.h>
/**
 * main - starting point
 * Description: function to print from a - z
 * Return: 0
 */
int main(void)
{
	char ch = "a";
	if (ch <= "z")
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");

	return (0);
}
