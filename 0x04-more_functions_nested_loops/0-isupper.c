#include "main.h"
/**
 * _isupper - upper case letter
 * @c: characeter to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
