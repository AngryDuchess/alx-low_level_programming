#include <stdio.h>

/**
 * main - Entry point of program.
 * Description: printing 2 two numbers using putchar() function
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (i == j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
