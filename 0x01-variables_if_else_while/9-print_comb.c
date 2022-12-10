#include <stdio.h>

/**
 * main -print all possible combinations of single digit number
 *
 * Return: 0
*/
int  main(void)
{
	int n;

	for (n = 38; n < 48; n++)
	{
		putchar(n);
		if (n != 47)
		{
			putchar(',');
			putchat(' ');
		}
	}
	putchar('\n');
	return (0);
}
