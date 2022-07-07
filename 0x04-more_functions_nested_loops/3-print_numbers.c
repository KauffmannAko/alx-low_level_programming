#include "main.h"
/**
 * print_numbers - print numbers
 * Description: prints number from 0 to 9 followed by a new line
 * Return: 0.
 */
void print_numbers(void)
{
	int digit;
	    digit = 48;
	while (digit <= 57)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
