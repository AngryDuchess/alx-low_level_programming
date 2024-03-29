#include <stdio.h>
/**
 * main - Entry point of program.
 * Description: prints out the sizes of some 
 * data types using sizeof() function
 *
 * Return: Always 0(Success)
 */

int main (void)
{
	int i;
	char c;
	long int l;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n",(unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long) sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n",(unsigned long) sizeof(f));

	return (0);
}
