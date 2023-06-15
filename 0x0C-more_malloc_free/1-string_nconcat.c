#include "main.h"
/**
 * string_nconcat - function to add 2 stings
 * @s1: param1
 * @s2: param2
 * n: param3
 * Return: concatinated value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *myPointer;

	unsigned int len1;
	unsigned int len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
	{
		n = len2;
	}
	myPointer = malloc(sizeof(char) * (n + len1 + 1));

	if (myPointer == NULL)
	{
		return (NULL);
	}
	strncpy(myPointer, s1, len1);
	strncat(myPointer, s2, n);

	return (myPointer);
}
