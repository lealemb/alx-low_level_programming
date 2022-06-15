#include "main.h"
/**
 * reverse_array - reverse
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i = 0, aux;
	while (i < n--)
	{
		aux =a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
