#include "main.h"
#include <string.h>
/**
 * *_strcat - a function to concatinate 2 strings
 *
 * @dest: parameter 1
 *
 * @src: parameter 2
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
