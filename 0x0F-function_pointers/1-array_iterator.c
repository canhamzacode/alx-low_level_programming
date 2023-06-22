#include "function_pointers.h"

/**
 * array_iterator - function that execute a function given as a param
 * @array: array of sting or int
 * @size: number of elements
 * @action: pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
