#include "main.h"
/**
*is_prime_number - prime numbers
*@n: the prime number to be checked
*Return: return value conditions
*
*/
int is_prime_number(int n)
{
if (n == 1)
{
return (0);
}
else if (n % 2 == 1)
{
return (1);
}
else
{
return (0);
}
}
