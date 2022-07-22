#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that locates a character in a string.
 * @s: The string
 * @c: a character in in the string
 * Return: pointer to the first occurrence of the character @c or @NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
