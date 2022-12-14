#include "main.h"
/**
 * is_lower - checks for lower case character
 * @c: the character to be checked
 * Return: 1 for lower case or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
