/**
 * _strncpy - copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		src_len++;
		src++;
	}

	src_len++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
		dest[i] = '\0';
	}

	return (temp);
}
