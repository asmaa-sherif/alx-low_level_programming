/*
 * File: 2-print_alphabet.c
 * Auth: Asmaa Sherif
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main (void)
{
  
  char alphabet_lowercase;
  
    for (alphabet_lowercase = "a"; alphabet_lowercase <= "z"; alphabet_lowercase++)
           putchar(alphabet_lowercase);
  
    putchar('\n');
  
    return(0);
}
