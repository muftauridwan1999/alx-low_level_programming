#include "main.h"
/**
*factorial - variable name finding the factorial of a number
*@n: the factorial of the integers
*Return: return -1 if < 0, if = 0 and return factoial otherwise
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
