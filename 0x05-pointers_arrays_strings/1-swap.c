#include "main.h"
#include <stdio.h>
/**
 * swap_int - write a function that swap the value of 2 integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int hi = *a;
	*a = *b;
	*b = hi;
}
