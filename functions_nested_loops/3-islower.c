#include "main.h"

/**
* _islower - return if the number is lower or not
*
* @c: character
*
* Return: always 1.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
