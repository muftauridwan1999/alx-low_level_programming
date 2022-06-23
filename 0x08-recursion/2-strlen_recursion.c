#include "main.h"
/**
*_strlen_recursion - finding the string length
*@s: the string length to find
*Return: return string length and return void at the ending of the program
int _strlen_recursion(char *s)
{
  if (*s != '\0')
  {
   return (1 + _strlen_recursion(s + 1));
  }
  return (0);
}
