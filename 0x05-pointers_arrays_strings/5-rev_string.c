#include "main.h"
/**
 * rev_string - reverse string
 * @s: The string  to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char new_str;
	int i, j;
	     i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < i--)
	{
		new_str = s[j];
		s[j++] = s[i];
		s[i] = new_str;
	}
}
