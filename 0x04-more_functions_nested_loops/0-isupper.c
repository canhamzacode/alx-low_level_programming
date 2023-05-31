#include "main.h"
/**
 * _isupper - function that check for upper case
 * Description: return 0 if uppercase else 1
 * @c : the parameter that will be passed
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
