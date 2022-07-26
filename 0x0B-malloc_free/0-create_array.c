#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;
	       i = 0;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (size == 0)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
