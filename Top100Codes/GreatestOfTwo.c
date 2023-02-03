#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the first number:");
    scanf("%d", &b);
    
    if(a>b)
    {
        printf("%d", a);
    }
    else if(b>a)
    {
        printf("%d", b);
    }
    else{
        printf("equal");
    }

    
    return 0;
}
