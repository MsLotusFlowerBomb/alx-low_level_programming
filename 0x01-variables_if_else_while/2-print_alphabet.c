#include <stdio.h>
/**
 *  main - Starting point
 *  Return: 0 (success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');
	return (0);
}
