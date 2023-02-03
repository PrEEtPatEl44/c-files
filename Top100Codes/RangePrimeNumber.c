#include<stdio.h>
#include<stdbool.h>
int isPrime(int n);
int main()
{
    int a=1;
    int k=5;
    for (int i=a; i<=k; i++)
    {
        (isPrime(i))? printf("%d\n", i):NULL;

        
    }
}
int isPrime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int j=2; j<n; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    return 1;
}