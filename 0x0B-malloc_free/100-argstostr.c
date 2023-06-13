#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, index, length, total_length;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1; /* +1 for the newline character */

	result = (char *)malloc((total_length + 1) * sizeof(char)); /* +1 for the*/
	if (result == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strncpy(result + index, av[i], length);
		index += length;
		result[index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);
}
