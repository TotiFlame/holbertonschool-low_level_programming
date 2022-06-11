#include "main.h"
/**
* _isupper - return 1 if its an uppercase
* @c: character
*
* Return: 1 or  0
*
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
