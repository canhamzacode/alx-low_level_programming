#include "main.h"
/**
 * _strdup - funct that returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 * Return: NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *newSpace;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Get Length of the string */
	while (str[i] != '\0')
	{
		i++;
	}

	newSpace = malloc(sizeof(str) * (i + 1));

	if (newSpace == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		newSpace[j] = str[j];
		j++;
	}
	return (newSpace);
}
