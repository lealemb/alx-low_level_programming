#include "main.h"
/**
 * _memset -starting of a function
 * @s: pointer
 * @n: intiger input
 * @b: character input
 *
 * Return: the area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
