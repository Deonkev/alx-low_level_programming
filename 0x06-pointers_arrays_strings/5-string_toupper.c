#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;

		a++;
	}

	return (str);
}
