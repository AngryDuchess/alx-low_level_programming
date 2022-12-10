#include <stdio.h>

/**
 * main - main block
 * Description:prints all single numbers in base 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

