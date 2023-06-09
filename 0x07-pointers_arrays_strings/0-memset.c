#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to a memory area
 * @b: constant byte
 * @n: bytes of memory to be filled
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		++ptr;
	}


	return (s);
}

