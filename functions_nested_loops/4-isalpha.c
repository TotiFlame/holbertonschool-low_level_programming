#include "main.h"

/**
* _isalpha - return 1 if is a letter, otherwise return 0
* @c: character
* Return: Always 1 or 0.
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && <= 122)
		return (1);
	else
		return (0);
}
