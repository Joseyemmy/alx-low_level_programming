#include <stdio.h>
#include <unistd.h>

/**
 * main - Print out the blast of a quote bin the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, " and that piece of art is useful - Dora korpar, 2015-10-19\n", 58);
	return (1);
}
