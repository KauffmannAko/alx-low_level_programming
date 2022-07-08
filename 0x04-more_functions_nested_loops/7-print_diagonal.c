#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on
 * @n: arg of type int
 * Return: 0.
 */

void print_diagonal(int n)
{
	int i, j;
	    i = 0;
	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
