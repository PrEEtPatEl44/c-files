#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter first num:");
    scanf("%d", &a);
    printf("Enter second num:");
    scanf("%d", &b);
    printf("Enter third num:");
    scanf("%d", &c);
   if (a>b){
    if(a>c){
        printf("%d", a);
    }
    else {
        printf("%d", c);
    }

   }
   else {
    if(b>c){
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }



   }
    return 0;
}