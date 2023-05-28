#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * Description: a function that generates a random number and reurn result based on condition
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive",n);
	}
	else
	{
		printf("%d is negative",n);
	}
	return (0);
}
