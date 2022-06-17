#include "main.h"
/**

 * _strcmp - function that compares two strings.

 *

 * @s1: pointer to char source 1

 * @s2: pointer to char source 2

 * Return: int

 */
int _strcmp(char *s1, char *s2)
{
int i;
int j;
i = 0;
while (s1[i] != '\0')
{
	if (s1[i] > s2[i])
			{
			j = s1[i] - s2[i];
			return (j);
			}
	else if (s1[i] < s2[i])
			{
			j = s1[i] - s2[i];
			return (j);
			}
	i++;
}
return (0);
}
