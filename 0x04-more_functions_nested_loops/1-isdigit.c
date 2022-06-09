#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if paramter c represents an digit.
 * @c: int representing an ascil character 
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return(0);
}
