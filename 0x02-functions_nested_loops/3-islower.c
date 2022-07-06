#include "main.h"
/**
 * _islower - Check lower case
 * @c: arg of type int
 * Description: check  for lowercase
 * Return: 1 if @ is lowercase and 0 otherwise.
 */
int _islower(int c)
{
	char ch;
	int state;
	    ch = 'a';
	while (ch <= 'z')
	{
		if (ch == c)
		{
			state = 1;
		}
		ch++;
	}
	return (state);
}
