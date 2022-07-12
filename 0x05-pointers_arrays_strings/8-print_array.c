#include "main.h"
#include <stdio.h>
/**
 * print_array - Print arrays
 * @a: The array to be printed
 * @n: The number  of elements in the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;
	    i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
