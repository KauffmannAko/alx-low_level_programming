#include "main.h"
/**
 * swap_int - swap two  integers @a and @b
 * @a: First integer
 * @b: Second integer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;
	    temp = *a;
	*a = *b;
	*b = temp;
}
