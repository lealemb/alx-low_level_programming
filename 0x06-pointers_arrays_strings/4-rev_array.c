#include "main.h"
/**
 * reverse_array - reverse
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i = 0, lms;
	while (i < n--)
	{
		lms = l[i];
		l[i++] = l[n];
		l[n] = lms;
	}
}
