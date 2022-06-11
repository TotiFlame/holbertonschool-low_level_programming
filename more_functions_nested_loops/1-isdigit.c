#include "main.h"
/**
* _isdigit - return 1  or 0 if the number is between 0 and 9
* @c: number
*
* Return: 1 or  0
*
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
