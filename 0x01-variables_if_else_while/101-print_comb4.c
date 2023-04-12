#include <stdio.h>
/**
 * main - Entry point of program.
 * Description: printing three digit numbers using putchar
 * where no one digit is the same.
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 56 && j == 57 && k == 58)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
