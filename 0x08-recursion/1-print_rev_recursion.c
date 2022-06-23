#include "main.h"
/**
*_print_rev_recursion - printing a string content in everse
*@s: the string to print it content in reversed
*/
void _print_rev_recursion(char *s)
{
  if ( *s != '\0')
  {
    _print_rev_recursion(s + 1);
    _putchar(*s);
    }
}
