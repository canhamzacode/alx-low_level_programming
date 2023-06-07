#include "main.h"
#include <string.h>
/**
 * *_strncpy - a functionn that copy
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);
	return (dest);
}
