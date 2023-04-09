#include <unistd.h>
/**
 * main - Entry point of program.
 * Description: printing out a sentence without using
 * the functions listed in the NAME section of the man (3)
 * printf or man (3) puts
 *
 * Return: Always 0(success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
