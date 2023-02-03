#include<stdio.h>
#include<stdbool.h>
int isPrime();
int main()
{   int n=1;
    int k=4;
    for(int a=n; a<=k; a++)
    {
        (isPrime(a))? printf("%d\n", a):NULL;
    }
   
  return 0;
}



int isPrime(int n)
{
      if(n<2)
      {
        return 0;   
      }
  for(int i=2; i<n; i++)
  {   
      if(n%i==0)
      {
        return 0;
      }
     // break;
  }
  
}
   