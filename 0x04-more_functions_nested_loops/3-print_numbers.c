#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: 0 on success
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
