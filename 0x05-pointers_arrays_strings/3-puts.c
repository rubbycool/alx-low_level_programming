#include <stdio.h>

/**
 *_puts - prints a string
 *@str: string
 *
 *Return : nothing
 */

void puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
