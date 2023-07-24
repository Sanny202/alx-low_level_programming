#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @x: integer to swap
 * @y: integer to swap
 */
void swap_int(int *y, int *x)
{
	int m;

	m = *y;
	*y = *x;
	*x = m;
}
