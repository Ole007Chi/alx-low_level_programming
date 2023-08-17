#include <stdio.h>

/**
 * print_alphabet - in lowercase
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123  ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
