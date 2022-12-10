#include<stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
