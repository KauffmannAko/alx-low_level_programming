#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp;
	      temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
