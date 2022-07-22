#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: a  string
 * @accept: a  character  to locate in string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, l;
	char *mem;
	      mem = accept;

	while (*s)
	{
		l = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				l = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = mem;
		if (l == 0)
			break;
	}
	return (i);
}
