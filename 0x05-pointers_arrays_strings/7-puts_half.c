#include "main.h"

/**
 * puts_half : prints remaing string
 * @str: string to be used
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int half;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length - 1) / 2;

	for (i = (half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
}
