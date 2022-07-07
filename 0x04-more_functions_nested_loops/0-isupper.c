#include "main.h"
/**
 * _isupper - Check for upper case character
 * @c: arg of type type int
 * Description: It prints the word Holberton, followed by a new line.
 * Return: @1 if true and @0 otherwise
 */
int _isupper(int c)
{
	char upper;
	int is_upper;
	    is_upper = 0;
	upper = 'A';
	while (upper <= 'Z')
	{
		if (upper == c)
		{
			is_upper = 1;
		}
		upper++;
	}
	return (is_upper);
}
