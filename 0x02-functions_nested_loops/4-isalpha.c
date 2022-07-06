#include "main.h"
/**
 * _isalpha - _isalpha
 * @c: arg of type int
 * Description: check  for lowercase
 * Return: 1 if @ is lowercase and 0 otherwise.
 */
int _isalpha(int c)
{
	char l, u;
	int is_letter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
			{
				is_letter = 1;
			}
		}
	}
	return (is_letter);
}
