#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		src_len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
