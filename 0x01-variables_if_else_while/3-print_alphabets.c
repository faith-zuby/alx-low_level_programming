#include <stdio.h>
/**
 * main - main block
 * Description: print thr alphabet in lower case and then in uppercase then print a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
