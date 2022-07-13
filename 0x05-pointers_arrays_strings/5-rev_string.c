#include <stdio.h>

/**
 *puts2 - print every other charachter of a string
 *@str: string
 *
 *Return: nothing
 *rev_string
 */

void rev_string(char *s)
{
	int i, l, len = 0;

	char c;

	while (s[len])
	}
	len++;
	l = len - 1;
	}

	for (i = 0; i < len / 2; i++)
	{
	c = s[i];
	s[i] = s[l];
	s[l] = c;
	l--;
	}
	}
