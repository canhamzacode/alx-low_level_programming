#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - write a function that returns the length of a string
 *
 * @s: parameter
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
