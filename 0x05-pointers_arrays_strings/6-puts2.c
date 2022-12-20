#include "main.h"

/**
 * puts2 - prints every other char of the string
 * @str: input string to input
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		for (i % 2 == 0)
			_putchar;

			(str[i]);

			i++;
	}

	_putchar('\n')
}
