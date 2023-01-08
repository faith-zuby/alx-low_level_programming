#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

