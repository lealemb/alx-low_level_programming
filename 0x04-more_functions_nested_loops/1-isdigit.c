#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if.
 * @c: int representing an ascil character 
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
