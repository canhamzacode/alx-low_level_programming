#include "main.h"
/**
 * swap_int - swap int
 * @a: int 1
 * @b: int 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
