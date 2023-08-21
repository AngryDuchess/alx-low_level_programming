#include <stdio.h>
#include "main.h"
/**
 * main - main block
 *_putchar - writes the character c to stdout
 * Return: on sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int n = 0;
	char str_put[8] = "_putchar";

	while (n < 8)
	{
		putchar(str_put[n]);
		n += 1;
	}
	putchar('\n');
	return (0);
}
