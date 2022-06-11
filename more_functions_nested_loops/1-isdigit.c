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
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
	{
        return (0);
    }
}
