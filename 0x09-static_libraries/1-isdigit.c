#include "main.h"
/**
 * _isdigit - _isdigit
 * @c: arg of type int
 * Description: check  for digits
 * Return: @1 if  is a digit  or  @0 otherwise.
 */
int _isdigit(int c)
{
	int digit, is_digit;
	    is_digit = 0;
	digit = 48;
	while (digit <= 57)
	{
		if (c == digit)
		{
			is_digit = 1;
		}
		digit++;
	}
	return (is_digit);
}
