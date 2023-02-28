<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
  int n;
  n = rand() - RAND_MAX / 2;
  if(n > 0){
    printf("%d is Positive \n" , n);
  }
  else if (n < 0){
    printf("%d is negative \n" , n);
  }
  else{
    printf("%d is zero \n" , n);
  }
  return(0);
=======
/*
 * File: 0-positive_or_negative.c
 * Auth: Asmaa Sherif
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
>>>>>>> 44a7b64e9303410818eeb5dd2260b7db06fc1f98
}
