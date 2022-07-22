#include "main.h"
/**
 * _memcpy - A function that fills memory with a constant byte
 * @n: number of bytes to  copy
 * @src: source memory area
 * @dest: destinatiion memory area
 * Return: Returns a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem;
	      mem = dest;
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (mem);
}
