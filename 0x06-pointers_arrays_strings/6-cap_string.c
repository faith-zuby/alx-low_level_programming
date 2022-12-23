#include "main.h"
/**
 * cap_string - function that capitalizes first string of a word
 * @a: string to capitalize
 * Return: returns the capitalzed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
			        str[index - 1] == '\n' ||
			        str[index - 1] == ',' ||
			        str[index - 1] == ';' ||
			        str[index - 1] == '.' ||
			        str[index - 1] == '!' ||
			        str[index - 1] == '?' ||
			        str[index - 1] == '"' ||
		 	        str[index - 1] == '(' ||
			        str[index - 1] == ')' ||
		      	        str[index - 1] == '{' ||
			        str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}

