#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @n: number of bytes to  fill
 * @s: where to fill the number of butes
 * @b: Th constant bytes to fill
 * Return: Returns a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *mem;
	      mem = s;
	while (n--)
	{
		*s = b;
		s++;
	}
	return (mem);
}
