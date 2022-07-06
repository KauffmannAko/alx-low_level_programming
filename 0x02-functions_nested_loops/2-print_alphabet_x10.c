#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: print from a to z 10 times.
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int i, c;
	    i = 0;
	while (i < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

