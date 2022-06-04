#include <stdio.h>



/**
 * main -entry point
 * Return: 0
 */

int main(void)
{

char l_letter = 'a';



while (l_letter <= 'z')

{

if (!(l_letter == 'e' || l_letter == 'q'))

{

putchar(l_letter);

}



l_letter++;

}



putchar('\n');



return (0);

}
