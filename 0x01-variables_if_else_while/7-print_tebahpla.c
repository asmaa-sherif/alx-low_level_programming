/* file: 7.Smile in the mirror
 * Auth: Asmaa Sherif
 */

#include <stdio.h>

/**
 * main - Prints all lowercase alphabet in reverse,
 * only using putchar.
 * Return: Always 0.
 */
int main(void)
{
  	char letter;

	for (letter = 'z'; letter <= 'a'; letter--)
	  	putchar(letter);

	putchar('\n');

	return(0);
}

