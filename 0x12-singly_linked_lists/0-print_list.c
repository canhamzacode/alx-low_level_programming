#include "lists.h"

/**
 * print_list - Write a function to print all elemet
 * @h: head node
 * Return: No of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	list_t *current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
