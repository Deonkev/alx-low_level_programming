#include <stdio.h>
#include <stdlib.h>

/**
 * main -print lowwercase alphabet in reverse
 *
 * Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
