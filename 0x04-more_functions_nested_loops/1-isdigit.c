#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: integer to be checked
 * Return: 1 if digit 0 for everything else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
