/*******************************************************************************
*
* Program: Determine if a number is prime
* 
* Description: An example of a function for determining whether a number is 
* prime or not.
*
* YouTube Lesson: https://www.youtube.com/watch?v=lAqH2dt7g5I 
*
* Author: Kevin Browne @ https://portfoliocourses.com
*
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number);

int main(void)
{
  // check the numbers between 2-1000 to see which are prime
  for (int i = 1; i <= 5; i++)
    if (is_prime(i)) printf("%d is prime\n", i);
    else printf("%d is not prime\n", i);
  
  return 0;
}

// returns true if the number is prime, false otherwise
bool is_prime(int number)
{
  // the number cannot be prime if it is <= 1
  if (number <= 1) return false;
  
  // Check to see if the number has a divisor between 2 ... number/2, if this 
  // is the case the number is NOT prime.  We only need to check up until 
  // number/2 because we can't have a divisor between number/2 + 1 up until 
  // number - 1
  for (int i = 2; i <= number ; i++)
    if (number % i == 0) return false;
  
  // if there was no divisor, the number must be prime and we return true
  return true;
}