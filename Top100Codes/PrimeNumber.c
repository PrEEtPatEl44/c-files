/*The return command will jump out of any number of loops 
//and pass the value back to the calling function without 
//having to finish the loops or the rest of the function*/
#include <stdio.h>
#include <stdbool.h>
int isPrime(int a);
int main() {
    int n=2;
   (isPrime(n))? printf("it is a prime no"):printf("it is not a prime no");

    return 0;
}



int isPrime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2; i<n; i++)
   {
       if(n%i==0){
          return 0;
       }
   }
    return 1;
   
}