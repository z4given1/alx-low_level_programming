#include "main.h"

/**
 * swap_int - swap the value of two int
 *
 *@a: 1st int
 *@b: 2nd int
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = *c;
}
