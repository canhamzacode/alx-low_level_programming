#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse content of an array
 *
 * @a: parameter 1
 * @n: number of element in the array
 *
 * Return: 0;
 */
void reverse_array(int *a, int n)
{

	int i;
	int temp;


	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
