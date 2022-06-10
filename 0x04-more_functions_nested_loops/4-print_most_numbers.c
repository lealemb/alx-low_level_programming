#imclude "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbrs(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num !=4)
			_putchar((num % 10) + '0');
	}
	

	_putchar('\n');
}
