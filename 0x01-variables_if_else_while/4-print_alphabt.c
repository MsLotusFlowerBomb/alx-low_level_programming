#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase == 'e' || lowercase == 'q')
{
lowercase++;
}
else
{
putchar(lowercase);
lowercase++;
}
}
putchar('\n');
return (0);
}
