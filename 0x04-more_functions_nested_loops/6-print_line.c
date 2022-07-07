#include "main.h"

 /**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i;
	    i = 0;
	for (i = 0; i <= n - 1; i++)
	{
		if (n < 0 || n == 0)
			_putchar('\n');
		_putchar(95);
	}
	_putchar('\n');
}
