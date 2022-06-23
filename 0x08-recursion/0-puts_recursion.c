#include "main.h"
/**
*_puts_recursion - printing a string content
*@s: the string to print it content
*Return: return nothing
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
