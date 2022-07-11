#include "main.h"
/**
 * print_rev - reverse print the string @s
 * @s: The string to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;
	    i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
}
