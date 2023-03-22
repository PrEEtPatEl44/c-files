#include<stdio.h>
int main(){
    int a;
    printf("Please Enter the #");
    scanf("%d", &a);
    if(a%2==0){
        printf("the number is Even");

    }
    
    else {
        printf("the number is Odd");
    }
    return 0;
}