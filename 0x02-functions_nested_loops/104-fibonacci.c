#include <stdio.h>

/**
 * main - prints 98 fibonacci numbers
 * Return: void
 */

int main(void)
{
	int counter;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num11, num22, num21, num22, half1, half2;

	for (counter = 0; counter < 92; counter++)
	{
	sum = num1 + num2;
	printf("%lu, ", sum);
	num1 = num2;
	num2 = sum;
	}
	num11 = num1 / 10000000000;
	num21 = num2 / 10000000000;
	num12 = num1 % 10000000000;
	num22 = num2 % 10000000000;
	for (counter = 93; counter < 99; counter++)
	{
	half1 = num11 + num21;
	half2 = num12 + num22;
	if (num12 + num22 > 9999999999)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%lu", half1, half2);
	if (counter != 98)
	printf(", ");
	num11 = num21;
	num12 = num22;
	num21 = half1;
	num22 = half2;
