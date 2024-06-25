#include <stdio.h>

/**
 * main - prints sum of fibonacci number
 * Return: void
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k = j < 4000000)
	{
	k += j;
	j = k - j;
	++i;
	}
	printf("%ld,", sum);
	printf("\n");
	return (0);
}
