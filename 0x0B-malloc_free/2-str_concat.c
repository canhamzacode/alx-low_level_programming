#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function to concatinate 2 strings
 * @s1: param 1
 * @s2: param 2
 * Return: depending
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, limit;
	char *strout;

	/*Check if value is null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Get Length of both string*/
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;
	/*Assign memory location */
	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
}
