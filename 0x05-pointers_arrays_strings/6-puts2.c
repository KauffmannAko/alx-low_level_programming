#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: The string  to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int l, i;
	    l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	l -= 1;
	for (; i <= l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
