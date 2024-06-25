#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase (True) and 0 for anything else (False)
 *
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);

}
