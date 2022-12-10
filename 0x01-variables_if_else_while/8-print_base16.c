#include<stdio.h>
/**
 * main -main block
 * Description: printing hexadecimals
 * Return: 0
 */
int main(void)
{
	char d = '0';
	char c = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}


	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
