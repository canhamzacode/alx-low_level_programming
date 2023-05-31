#include "main.h"
/**
 * _isdigit : check for digit from 0 to 9
 * Descripription : return 1 if digit else 0
 * @c : parameter
 * Return: 1/0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
