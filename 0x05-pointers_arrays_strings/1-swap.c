 #include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
