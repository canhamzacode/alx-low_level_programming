#include "main.h"
/**
 * malloc_cheched - function to create a memory
 * @b: paramerter
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *myPointer;

	myPointer = malloc(b);
	if (myPointer == NULL)
	{
		exit(98);
	}
	return (myPointer);
}
