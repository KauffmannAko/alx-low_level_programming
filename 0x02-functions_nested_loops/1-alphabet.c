#include "main.h"
/**
 * print_alphabet - print alphabet
 * Description: print from a to z.
 * Return: 0.
 */
void print_alphabet(void)
{
	int c;
	    c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
