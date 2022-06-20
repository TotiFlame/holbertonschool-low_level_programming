#include "main.h"

int prime(int p, int i)
{

	if (p == 1)
		return (0);
	else if (p < 0)
		return (0);
	if (i < p)
	{
		if (p % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(p, i + 1));
		}
	}
	else if (p % 1 == 0 && p % p == 0)
	{
		return (1);
	}
}

int is_prime_number(int n)
{
	return (prime(n, 2));
}
