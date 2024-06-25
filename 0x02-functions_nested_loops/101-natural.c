#include <stdio.h>

/**
 * main- prints the sum
 * Return: void
 */

int main(void)

{
	int i, j = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	j += i;
	}
	i++;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}
