#include <stdio.h>

/**
 * main - Entry point of program.
 * Description: printing 2 two numbers using putchar() function
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int i, j, k, l, temp1, temp2;

	i = j = k = l = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				l = 48;
				while (l < 58)
				{
					temp1 = (i * 10) + j;
					temp2 = (k * 10) + l;

					if (temp1 < temp2)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;

						putchar(',');
						putchar(' ');
					}
					l++;
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
