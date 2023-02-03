#include<stdio.h>
int main(){
    double a;
    printf("Enter the number:");
    scanf("%lf", &a);
    if(a<0)
    {
        printf("the number is negative");
    }
    else if(a>0)
    {
        printf("the number is positive");
    }
    else if(a==0)
    {
        printf("Zero");
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}