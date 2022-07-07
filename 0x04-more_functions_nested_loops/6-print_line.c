#include "main.h"

 /**
 * print_line - The function prints a new line.
 * @n: arg of type int
 *
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
