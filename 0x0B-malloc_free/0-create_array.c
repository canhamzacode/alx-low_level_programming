#include "main.h"
/**
 * create_array -function to create an array of char
 * @size: size of the array
 * @c: char
 * Return: Null if size is 0 / pointer
 */
char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	myArray = malloc(sizeof(c) * size);

	if (myArray == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		myArray[i] = c;
		i++;
	}
	return (myArray);
}
